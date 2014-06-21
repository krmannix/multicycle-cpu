`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:01:53 11/25/2013 
// Design Name: 
// Module Name:    ProgramCounter_2 
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
module ProgramCounter_2(or1_out, mux6out, PCAddress, clk, reset);

input [31:0] mux6out;
input or1_out, clk, reset;
output reg [31:0] PCAddress;

initial begin
PCAddress <= 0;
end


always @ (posedge clk or posedge reset) begin
	if (reset) begin
		PCAddress <= 0;
	end else begin
		if (or1out == 1'b1) begin
			PCAddress <= mux6out;
		end else begin
			PCAddress <= PCAddress;
		end
	end
end


endmodule

