`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:41:18 10/26/2018
// Design Name:   alu
// Module Name:   E:/Documents/ISE/P12/alu_tb.v
// Project Name:  P12
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: alu
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module alu_tb;

	// Inputs
	reg [31:0] A;
	reg [31:0] B;
	reg [2:0] ALUOp;

	// Outputs
	wire [31:0] C;

	// Instantiate the Unit Under Test (UUT)
	alu uut (
		.A(A), 
		.B(B), 
		.ALUOp(ALUOp), 
		.C(C)
	);

	initial begin
		// Initialize Inputs
		A = 32'b1000_0000_0000_0000_0000_0000_0000_0000;
		B = 3'b101;
		ALUOp = 0;

		// Wait 100 ns for global reset to finish
		#10;
      ALUOp=1;
		#10;
		ALUOp=2;
		#10;
		ALUOp=3;
		#10;
		ALUOp=4;
		#10;
		ALUOp=5;
	end
      
endmodule

