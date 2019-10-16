`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:02:45 10/26/2018
// Design Name:   ext
// Module Name:   E:/Documents/ISE/P13/ext_tb.v
// Project Name:  P13
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ext
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ext_tb;

	// Inputs
	reg [15:0] imm;
	reg [1:0] EOp;

	// Outputs
	wire [31:0] ext;

	// Instantiate the Unit Under Test (UUT)
	ext uut (
		.imm(imm), 
		.EOp(EOp), 
		.ext(ext)
	);

	initial begin
		// Initialize Inputs
		imm = 16'b1101_1011_1000_0110;
		EOp = 0;

		// Wait 100 ns for global reset to finish
		#10;
		EOp=1;
		#10;
		EOp=2;
		#10;
		EOp=3;
		
        
		// Add stimulus here

	end
      
endmodule

