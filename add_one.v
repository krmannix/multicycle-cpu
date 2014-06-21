`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:31:48 12/08/2013 
// Design Name: 
// Module Name:    add_one 
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
module add_one(in, out);
input [31:0] in;
output reg [31:0] out;

always @ (*) begin
out = in + 1;
end

endmodule
