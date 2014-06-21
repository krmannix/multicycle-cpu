`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:05:24 11/23/2013 
// Design Name: 
// Module Name:    OneBitMux 
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
module OneBitMux(Input0, Input1, Sel, Output);

parameter inputWidth = 32;
input Sel;
output reg [inputWidth-1:0] Output;
input [inputWidth-1:0] Input0, Input1;

always @ (*)
if (Sel == 1'b1) begin
	Output = Input1;
end else begin
	Output = Input0;
end


endmodule
