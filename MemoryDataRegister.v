`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:17:28 11/25/2013 
// Design Name: 
// Module Name:    MemoryDataRegister 
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
module MemoryDataRegister(MemData, RegMemData, clk, reset);

always @ (posedge clk or posedge reset) begin
if (reset) begin
RegMemData <= 0;
end else begin
RegMemData <= MemData;
end

end


endmodule
