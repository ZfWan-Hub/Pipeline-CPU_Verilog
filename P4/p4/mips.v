`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:30:57 11/16/2018 
// Design Name: 
// Module Name:    mips 
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
module mips(
	input clk,
	input reset
    );
	wire nPC_sel;
	wire zero;
	wire [15:0] imm16;
	wire [25:0] imm26;
	wire j_instr;
	wire [31:0]Instr;
	wire [31:0]PC;
	
	wire [5:0]func;
	wire [4:0]rd;
	wire [4:0]rt;
	wire [4:0]rs;
	wire [5:0]op;
	wire jr;
	wire [31:0] RD1;
	
	
	IFU ifu(
	.nPC_sel(nPC_sel),
	 .zero(zero),
	.imm16(imm16),
	.imm26(imm26),
	 .j_instr(j_instr),
	 .jr(jr),
	 .RD1(RD1),
	 .reset(reset),
	 .clk(clk),
	 .Instr(Instr),
	 .PC(PC)
	 );
	 
	 assign {op,rs,rt,imm16}=Instr;
	 assign rd=Instr[15:11];
	 assign func=Instr[5:0];
	 assign imm26=Instr[25:0];
	 
	 
	wire [1:0]RegDst;
	wire ALUSrc;
	wire [1:0]MemtoReg;
	wire RegWrite;
	wire MemWrite;
	
	
	wire [1:0] ExtOp;
	wire [1:0] ALUctr;
	 
	 ctrl CTRL(
		.op(op), 
		.func(func), 
		.RegDst(RegDst), 
		.ALUSrc(ALUSrc), 
		.MemtoReg(MemtoReg), 
		.RegWrite(RegWrite), 
		.MemWrite(MemWrite), 
		.nPC_sel(nPC_sel), 
		.j_instr(j_instr), 
		.jr(jr),
		.ExtOp(ExtOp), 
		.ALUctr(ALUctr)
	 );
	 
		 wire [4:0] RegAddr;
	 wire [31:0] RegData;
	 
	 
	 wire [31:0] RD2;
	 
	 GRF grf(
		.A1(rs), 
		.A2(rt), 
		.A3(RegAddr), 
		.WD(RegData), 
		.WE(RegWrite), 
		.clk(clk), 
		.reset(reset), 
		.PC(PC),
		.RD1(RD1), 
		.RD2(RD2)
	 );
	 
	 wire [31:0] ALUsec;
	 wire [31:0] ALUans;
	 
	 ALU alu(
		.A(RD1), 
		.B(ALUsec), 
		.ALUOp(ALUctr), 
		.C(ALUans)
	 );
	 
	 wire [9:0] MemAddr;
	 
	 assign zero=(ALUans==0);
	 assign MemAddr=ALUans[11:2];
	 
	 wire [31:0] DataOut;
	 
	 DM dm(
		.Addr(MemAddr), 
		.DataIn(RD2), 
		.DMwrite(MemWrite), 
		.clk(clk), 
		.PC(PC),
		.reset(reset), 
		.DataOut(DataOut)
	 );
	 
	 wire [31:0] imm32;
	 
	 EXT ext(
		.imm16(imm16), 
		.EXTOp(ExtOp), 
		.imm32(imm32)
	 );
	 
	 mux MUX(
		.rt(rt), 
		.rd(rd), 
		.RegDst(RegDst), 
		.R2(RD2), 
		.imm32(imm32), 
		.ALUSrc(ALUSrc), 
		.ALUans(ALUans), 
		.Memdout(DataOut), 
		.PC(PC), 
		.MemtoReg(MemtoReg), 
		.RegAddr(RegAddr), 
		.ALUsec(ALUsec), 
		.RegData(RegData)
	 );
	 
	 

endmodule
