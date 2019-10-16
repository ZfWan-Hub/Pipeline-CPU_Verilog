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
	output [4:0] s,
	output [15:0] imm16,
	output [25:0] imm26,
	output  [1:0]RegDst,
	output  ALUSrc,
	output  [2:0]MemtoReg,
	output  RegWrite,
	output  MemWrite,
	output  [1:0] EXTOp,
	output  [4:0] ALUctr,
	output [3:0]nPC_sel,
	output [4:0] A3,
	output [2:0]DEXT_Op,
	output [1:0]BEOp,
	output start,
	output HI_write,
	output LO_write,
	output [1:0]m_or_d	
    ); 
	 
	  `define LB    6'b100000	  
	  `define LBU   6'b100100	 
	  `define LH    6'b100001
	  `define LHU   6'b100101	  
	  `define LW    6'b100011
	  //load
	  `define SB  6'b101000	  
	  `define SH  6'b101001	 
	  `define SW  6'b101011
	  //store
	  `define ADD   12'b000000_100000 
	  `define ADDU  12'b000000_100001	
	  `define SUB   12'b000000_100010
	  `define SUBU  12'b000000_100011 
	  `define SLT   12'b000000_101010	
	  `define SLTU  12'b000000_101011	
	  `define SLL   12'b000000_000000 
	  `define SRL   12'b000000_000010	
	  `define SRA   12'b000000_000011	
	  `define SLLV  12'b000000_000100 
	  `define SRLV  12'b000000_000110	
	  `define SRAV  12'b000000_000111	
	  `define AND   12'b000000_100100 
	  `define OR    12'b000000_100101	
	  `define XOR   12'b000000_100110	
	  `define NOR   12'b000000_100111
	 //R-R运算
	 `define ADDI  6'b001000	
	 `define ADDIU 6'b001001  
	 `define ANDI  6'b001100
	 `define ORI   6'b001101	
	 `define XORI  6'b001110	
	 `define LUI   6'b001111
	 `define SLTI  6'b001010	
	 `define SLTIU 6'b001011
	 //R-I运算
	 `define BEQ   6'b000100	
	 `define BNE   6'b000101	
	 `define BLEZ  6'b000110
	 `define BGTZ  6'b000111	
	 `define BLTZ  11'b000001_00000	
	 `define BGEZ  11'b000001_00001
	 //分支
	 `define J     6'b000010	
	 `define JAL   6'b000011	
	 `define JALR 12'b000000_001001
	 `define JR   12'b000000_001000
	 //跳转
	 `define MULT    12'b000000_011000	
	 `define MULTU   12'b000000_011001	
	 `define DIV     12'b000000_011010
	 `define DIVU    12'b000000_011011
	 //乘除运算
	 `define MFHI   12'b000000_010000	
	 `define MFLO   12'b000000_010010	
	 `define MTHI   12'b000000_010001	
	 `define MTLO   12'b000000_010011
	 //读、写HI、LO
	
	 wire [5:0] op;
	 wire [5:0] func;
	 
	 
	 assign {op,rs,rt,imm16}=IR;
	 assign rd=IR[15:11];
	 assign func=IR[5:0];
	 assign imm26=IR[25:0];
	 assign s=IR[10:6];
	 
	 assign RegDst=(op==`LB)|(op==`LBU)|(op==`LH)|(op==`LHU)|(op==`LW)|
						(op==`ADDI)|(op==`ADDIU)|(op==`ANDI)|(op==`ORI)|
						(op==`XORI)|(op==`LUI)|(op==`SLTI)|(op==`SLTIU) ? 2'b00 :
						(op==`JAL) ? 2'b10 :2'b01;
	 assign A3=(RegDst==2'b00)?rt:
				  (RegDst==2'b01)?rd:5'd31;
	 assign ALUSrc=(op==`LB)|(op==`LBU)|(op==`LH)|(op==`LHU)|(op==`LW)|
						(op==`SB)|(op==`SH)|(op==`SW)|
						(op==`ADDI)|(op==`ADDIU)|(op==`ANDI)|(op==`ORI)|
						(op==`XORI)|(op==`LUI)|(op==`SLTI)|(op==`SLTIU) ? 1 :0;
						 
	 assign MemtoReg=({op,func}==`MFHI)?3'b100:
							({op,func}==`MFLO)?3'b011:
						  (op==`JAL)|({op,func}==`JALR) ? 3'b010:
						  (op==`LB)|(op==`LBU)|(op==`LH)|(op==`LHU)|(op==`LW)?3'b001:3'b000;
	 assign RegWrite=(op==`SB)|(op==`SH)|(op==`SW)|
						  (op==`BEQ)|(op==`BNE)|(op==`BLEZ)|(op==`BGTZ)|
						  ({op,rt}==`BLTZ)|({op,rt}==`BGEZ)|(op==`J)|({op,func}==`JR)|
						  ({op,func}==`MULT)|({op,func}==`MULTU)|
						  ({op,func}==`DIV)|({op,func}==`DIVU)|
						  ({op,func}==`MTHI)|({op,func}==`MTLO)?0:1;
	 assign MemWrite=(op==`SB)|(op==`SH)|(op==`SW)?1:0;
	 assign EXTOp=(op==`LUI)?2'b10:
						(op==`ANDI)|(op==`ORI)|(op==`XORI)?2'b00:2'b01;
	 assign ALUctr=({op,func}==`SUB)|({op,func}==`SUBU)?5'd1:  //减法
						({op,func}==`SLT)|(op==`SLTI)?5'd2:  //小于置一
						({op,func}==`SLTU)|(op==`SLTIU)?5'd3:  //小于置一（无符号）
						({op,func}==`SLL)? 5'd4://逻辑左移
						({op,func}==`SRL)? 5'd5://逻辑右移
						({op,func}==`SRA)? 5'd6://算数右移
						({op,func}==`SLLV)?5'd7://逻辑可变左移
						({op,func}==`SRLV)?5'd8://逻辑可变右移
						({op,func}==`SRAV)?5'd9://算数可变右移
						({op,func}==`AND)|(op==`ANDI)?5'd10://与
						({op,func}==`OR)|(op==`ORI)?5'd11://或
						({op,func}==`XOR)|(op==`XORI)?5'd12://异或
						({op,func}==`NOR)?5'd13:5'd0;//或非
						//加法
	 assign nPC_sel=(op==`BEQ)?4'd1:
						 (op==`BNE)?4'd2:
						 (op==`BLEZ)?4'd3:
						 (op==`BGTZ)?4'd4:
						 ({op,rt}==`BLTZ)?4'd5:
						 ({op,rt}==`BGEZ)?4'd6:
						 (op==`J)|(op==`JAL)?4'd7:
						 ({op,func}==`JALR)|({op,func}==`JR)?4'd8:4'd0;
	assign DEXT_Op=(op==`LW)?3'd0:
						(op==`LBU)?3'd1:
						(op==`LB)?3'd2:
						(op==`LHU)?3'd3:3'd4;
	assign BEOp=(op==`SW)?2'd0:
					(op==`SH)?2'd1:2'd2;
						
	assign start=({op,func}==`MULT)|({op,func}==`MULTU)|({op,func}==`DIV)|({op,func}==`DIVU)?1:0;				
				  
	assign HI_write=({op,func}==`MTHI)?1:0;
	assign LO_write=({op,func}==`MTLO)?1:0;
	assign m_or_d=({op,func}==`MULT)?2'b00:
						({op,func}==`MULTU)?2'b01:
						({op,func}==`DIV)?2'b10:2'b11;
						
	 
		

		
		
		
endmodule
