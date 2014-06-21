`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:54:50 11/23/2013 
// Design Name: 
// Module Name:    MemBlock 
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
module MemBlock(WriteData,   // Input data into the memory
            MemData,     // Output data from the memory
            Address,     // Address of data to be read/written
            MemWrite,    // When high, causes write to take place on posedge
            Clk, 
				IorD);
				
parameter ADDRESS_WIDTH = 32;
parameter DATA_WIDTH = 32;

input [DATA_WIDTH-1:0]       WriteData;
input [ADDRESS_WIDTH-1:0]    Address;
input MemWrite;
input Clk;
output [DATA_WIDTH-1:0] MemData;				

always @ (*)
	if (IorD == 1'b0) begin
		IMem(Address, MemData);
	end else begin
		DMem(WriteData, MemData, Address, MemWrite, Clk);
	end


endmodule
