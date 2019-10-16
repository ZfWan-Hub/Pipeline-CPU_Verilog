`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:18:11 11/16/2018 
// Design Name: 
// Module Name:    ctrl 
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
module ctrl(
	input [31:0] IR,
	output [4:0] rs,
	output [4:0] rt,
	output [4:0] rd,
	output [15:0] imm16,
	output [25:0] imm26,
	output reg [1:0]RegDst,
	output reg ALUSrc,
	output reg [1:0]MemtoReg,
	output reg RegWrite,
	output reg MemWrite,
	output reg beq,
	output reg j_instr,
	output reg jr,
	output reg [1:0] ExtOp,
	output reg [1:0] ALUctr,
	output reg [4:0] A3
    );
	 
	 `define addu 12'b000000100001
	 `define subu 12'b000000100011
	 `define ori 6'b001101
	 `define lw 6'b100011
	 `define sw 6'b101011
	 `define beq 6'b000100
	 `define lui 6'b001111
	 `define jal 6'b000011
	 `define j 6'b000010
	 `define jr 12'b000000001000
	 
	 wire [5:0] op;
	 wire [5:0] func;
	 
	 assign {op,rs,rt,imm16}=IR;
	 assign rd=IR[15:11];
	 assign func=IR[5:0];
	 assign imm26=IR[25:0];
	 
	 
	  always @(*)begin
		
		if({op,func}==`addu||{op,func}==`subu)begin
			RegDst=01;
			A3=rd;
			end
		else if(op==`jal)begin
			RegDst=10;
			A3=5'd31;
			end
		else begin
		RegDst=00;
		A3=rt;
		end
		 
		if(op==`ori||op==`lw||op==`sw||op==`lui)
			ALUSrc=1;
		else ALUSrc=0;
		
		if(op==`lw)MemtoReg=2'b01;
		else if(op==`jal)MemtoReg=2'b10;
		else MemtoReg=2'b00;
		
		if({op,func}==`addu||{op,func}==`subu||op==`ori||op==`lw||op==`lui||op==`jal)
			RegWrite=1;
		else RegWrite=0;
		
		if(op==`sw)MemWrite=1;
		else MemWrite=0;
		
		if(op==`beq)beq=1;
		else beq=0;
		
		if(op==`jal||op==`j)j_instr=1;
		else j_instr=0;
		
		if(op==`ori)ExtOp=2'b00;
		else if(op==`lui)ExtOp=2'b10;
		else ExtOp=2'b01;
		
		if(op==`ori)ALUctr=2'b10;
		else if({op,func}==`subu||op==`beq)ALUctr=2'b01;
		else ALUctr=2'b00;
		
		if({op,func}==`jr)jr=1;
		else jr=0;
	 end

		
		
		
endmodule
