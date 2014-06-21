`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:36:36 11/23/2013 
// Design Name: 
// Module Name:    TwoBitMux 
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
module TwoBitMux(input0, input1, input2, input3, sel, out);

input [31:0] input0, input1, input2, input3;
input [1:0] sel;
output reg [31:0] out;

always @ (*) begin
	if (sel == 2'b00) begin
		out = input0;
	end else if (sel == 2'b01) begin
		out = input1;
	end else if (sel == 2'b10) begin
		out = input2;
	end else if (sel == 2'b11) begin
		out = input3;
	end
end

endmodule
