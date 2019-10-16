`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:06:00 11/16/2018 
// Design Name: 
// Module Name:    mux 
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
module mux(
	input [4:0]rt,
	input [4:0]rd,
	input [1:0]RegDst,
	
	input [31:0] R2,
	input [31:0] imm32,
	input ALUSrc,
	
	input [31:0]ALUans,
	input [31:0]Memdout,
	input [31:0]PC,
	input [1:0]MemtoReg,
	
	output reg[4:0]RegAddr,
	output reg[31:0]ALUsec,
	output reg[31:0]RegData
    );

	always @(*)begin
		case (RegDst)
			2'b00:RegAddr=rt;
			2'b01:RegAddr=rd;
			2'b10:RegAddr=31;
		endcase
		
		ALUsec=ALUSrc ? imm32:R2;
		
		case (MemtoReg)
			2'b00:RegData=ALUans;
			2'b01:RegData=Memdout;
			2'b10:RegData=PC+4;
		endcase
			
	end

endmodule
