`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:45:40 11/23/2013
// Design Name:   Top
// Module Name:   /ad/eng/users/k/m/kmannix/EC 413/Project_Ver1/TestTop_1.v
// Project Name:  Project_Ver1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TestTop_1;

	// Inputs
	reg clk;
	reg reset;

	// Instantiate the Unit Under Test (UUT)
	Top uut (
		.clk(clk), 
		.reset(reset)
	);
always #1
	clk = ~clk;
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		// Wait 100 ns for global reset to finish
		#100;
		
      reset = 0;
		#400;
		// Add stimulus here

	end
      
endmodule

