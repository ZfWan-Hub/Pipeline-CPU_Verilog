`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:16:40 11/16/2018
// Design Name:   mux
// Module Name:   E:/Documents/P4/p4/tb.v
// Project Name:  p4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mux
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb;

	// Inputs
	reg [4:0] rt;
	reg [4:0] rd;
	reg [1:0] RegDst;
	reg [31:0] R2;
	reg [31:0] imm32;
	reg ALUSrc;
	reg [31:0] ALUans;
	reg [31:0] Memdout;
	reg [31:0] PC;
	reg [1:0] MemtoReg;

	// Outputs
	wire [4:0] RegAddr;
	wire [31:0] ALUsec;
	wire [31:0] RegData;

	// Instantiate the Unit Under Test (UUT)
	mux uut (
		.rt(rt), 
		.rd(rd), 
		.RegDst(RegDst), 
		.R2(R2), 
		.imm32(imm32), 
		.ALUSrc(ALUSrc), 
		.ALUans(ALUans), 
		.Memdout(Memdout), 
		.PC(PC), 
		.MemtoReg(MemtoReg), 
		.RegAddr(RegAddr), 
		.ALUsec(ALUsec), 
		.RegData(RegData)
	);

	initial begin
		// Initialize Inputs
		rt = 0;
		rd = 0;
		RegDst = 0;
		R2 = 0;
		imm32 = 0;
		ALUSrc = 0;
		ALUans = 0;
		Memdout = 0;
		PC = 0;
		MemtoReg = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

