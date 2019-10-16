`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:05:35 12/02/2018 
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
	
	wire [31:0]MUX_PC;
	wire PC_en;
	wire [31:0] IR1;
	wire [31:0] PC4;
	
	IFU ifu(
	.mux_pc(MUX_PC),
	.clk(clk),
	.reset(reset),
	.PC_en(PC_en),
	.IR(IR1),
	.PC4(PC4)
	);
	
	//IFU部件
	
	wire IR_D_en;
	wire [31:0] IR_D;
	wire [31:0] PC4_D;
	
	D_reg D_reg(
	.IR(IR1),
	.PC4(PC4),
	.clk(clk),
	.reset(reset),
	.IR_D_en(IR_D_en),
	.IR_D(IR_D),
	.PC4_D(PC4_D)
	);
	
	//D级流水线寄存器
	
	wire [4:0] rs_D;
	wire [4:0] rt_D;
	wire [31:0] MUX_WD;
	wire W_W;
	wire [31:0] RF_RD1;
	wire [31:0] RF_RD2;
	wire [4:0] A3_W;
	wire [31:0] PC8_W;
	
	RF RF(
	.A1(rs_D),
	.A2(rt_D),
	.A3(A3_W),
	.WD(MUX_WD),
	.PC8_W(PC8_W),
	.WE(W_W),
	.clk(clk),
	.reset(reset),
	.RD1(RF_RD1),
	.RD2(RF_RD2)
	);
	
	//RF部件
	
	wire [15:0] imm16_D;
	wire [1:0] EXTOp_D;
	wire [31:0] E32;
	
	EXT EXT(
	.imm16(imm16_D),
	.EXTOp(EXTOp_D),
	.imm32(E32)
	);
	
	//EXT部件
	
	wire [25:0] imm26_D;
	wire [31:0] NPC1;
	wire [31:0] NPC2;
	
	NPC NPC(
	.PC4(PC4_D),
	.imm16(imm16_D),
	.imm26(imm26_D),
	.NPC1(NPC1),
	.NPC2(NPC2)
	);
	
	//NPC部件
	
	wire [31:0] MFRSD;
	wire [31:0] MFRTD;
	wire zero;
	
	CMP CMP(
	.D1(MFRSD),
	.D2(MFRTD),
	.zero(zero)
	);
	
	//CMP部件
	
	wire IR_E_clr;
	wire [31:0] V1_E;
	wire [31:0] V2_E;
	wire [31:0] E32_E;
	wire [31:0] IR_E;
	wire [31:0] PC8_E;
	
	E_reg E_reg(
	.V1(MFRSD),
	.V2(MFRTD),
	.E32(E32),
	.IR(IR_D),
	.PC4(PC4_D),
	.clk(clk),
	.reset(reset),
	.IR_E_clr(IR_E_clr),
	.V1_E(V1_E),
	.V2_E(V2_E),
	.E32_E(E32_E),
	.IR_E(IR_E),
	.PC8_E(PC8_E)
	);
	
	//E级流水线寄存器
	
	wire [31:0] MFRSE;
	wire [31:0] MFRTE;
	wire [1:0] ALUOp_E;
	wire [31:0] AO_E;
	wire [31:0] MUX_ALU_B;
	
	ALU ALU(
	.A(MFRSE),
	.B(MUX_ALU_B),
	.ALUOp(ALUOp_E),
	.C(AO_E)
	);
	
	//ALU部件
	
	wire [31:0] V2_M;
	wire [31:0] IR_M;
	wire [31:0] AO_M;
	wire [31:0] PC8_M;
	
	M_reg M_reg(
	.V2(MFRTE),
	.IR(IR_E),
	.AO(AO_E),
	.PC8(PC8_E),
	.clk(clk),
	.reset(reset),
	.V2_M(V2_M),
	.IR_M(IR_M),
	.AO_M(AO_M),
	.PC8_M(PC8_M)
	);
	
	//M级流水线寄存器
	
	wire [31:0] MFRTM;
	wire MemWrite_M;
	wire [31:0] DR_M;
	
	DM DM(
	.Addr(AO_M),
	.WD(MFRTM),
	.DMwrite(MemWrite_M),
	.PC8_M(PC8_M),
	.clk(clk),
	.reset(reset),
	.dataout(DR_M)
	);
	
	//DM部件
	
	wire [31:0] IR_W;
	
	wire [31:0] AO_W;
	wire [31:0] DR_W;
	
	W_reg W_reg(
	.IR(IR_M),
	.PC8(PC8_M),
	.AO(AO_M),
	.DR(DR_M),
	.clk(clk),
	.reset(reset),
	.IR_W(IR_W),
	.PC8_W(PC8_W),
	.AO_W(AO_W),
	.DR_W(DR_W)
	);
	
	//W级流水线寄存器
	
	wire beq_D;
	wire j_instr_D;
	wire jr_D;
	wire [1:0] EXTOp;
	
	ctrl CTRL_D(
	.IR(IR_D),
	.rs(rs_D),
	.rt(rt_D),
	.imm16(imm16_D),
	.imm26(imm26_D),
	.beq(beq_D),
	.j_instr(j_instr_D),
	.jr(jr_D),
	.ExtOp(EXTOp_D)
	);
	
	//D级控制信号
	
	wire [4:0] A1_E;
	wire [4:0] A2_E;
	wire [4:0] A3_E;
	wire W_E;
	wire ALUSrc_E;
	
	ctrl CTRL_E(
	.IR(IR_E),
	.rs(A1_E),
	.rt(A2_E),
	.A3(A3_E),
	.RegWrite(W_E),
	.ALUctr(ALUOp_E),
	.ALUSrc(ALUSrc_E)
	);
	
	//E级控制信号
	
	wire [4:0] A2_M;
	wire [4:0] A3_M;
	wire W_M;
	
	ctrl CTRL_M(
	.IR(IR_M),
	.rt(A2_M),
	.A3(A3_M),
	.RegWrite(W_M),
	.MemWrite(MemWrite_M)
	);
	
	//M级控制信号
	
	wire [1:0] MemtoReg_W;
	
	ctrl CTRL_W(
	.IR(IR_W),
	.A3(A3_W),
	.RegWrite(W_W),
	.MemtoReg(MemtoReg_W)
	);
	
	//W级控制信号
	
	wire [2:0] F_RS_D;
	wire [2:0] F_RT_D;
	wire [1:0] F_RS_E;
	wire [1:0] F_RT_E;
	wire F_RT_M;
	
	hazard Hazard(
	.IR_D(IR_D),
	.IR_E(IR_E),
	.IR_M(IR_M),
	.IR_W(IR_W),
	.W_E(W_E),
	.W_M(W_M),
	.W_W(W_W),
	.A1_D(rs_D),
	.A2_D(rt_D),
	.A1_E(A1_E),
	.A2_E(A2_E),
	.A2_M(A2_M),
	.A3_E(A3_E),
	.A3_M(A3_M),
	.A3_W(A3_W),
	.PC_en(PC_en),
	.IR_D_en(IR_D_en),
	.IR_E_clr(IR_E_clr),
	.F_RS_D(F_RS_D),
	.F_RT_D(F_RT_D),
	.F_RS_E(F_RS_E),
	.F_RT_E(F_RT_E),
	.F_RT_M(F_RT_M)
	);
	//冲突单元
	
	MUX1 MUX1(
	.PC4(PC4),
	.NPC1(NPC1),
	.NPC2(NPC2),
	.MFRSD(MFRSD),
	.zero(zero),
	.beq(beq_D),
	.j_instr(j_instr_D),
	.jr(jr_D),
	.MUX_PC(MUX_PC),
	
	.V2(MFRTE),
	.E32(E32_E),
	.ALUSrc(ALUSrc_E),
	.MUX_ALU_B(MUX_ALU_B),
	
	.AO(AO_W),
	.DR(DR_W),
	.PC8(PC8_W),
	.MemtoReg(MemtoReg_W),
	.MUX_WD(MUX_WD)
	
	);
	
	//功能多选器
	
	MUX2 MUX2(
	.PC8_E(PC8_E),
	.PC8_M(PC8_M),
	.AO_M(AO_M),
	.WD(MUX_WD),
	.RF_RD1(RF_RD1),
	.F_RS_D(F_RS_D),
	.MFRSD(MFRSD),
	
	.RF_RD2(RF_RD2),
	.F_RT_D(F_RT_D),
	.MFRTD(MFRTD),
	
	.V1_E(V1_E),
	.F_RS_E(F_RS_E),
	.MFRSE(MFRSE),
	
	.V2_E(V2_E),
	.F_RT_E(F_RT_E),
	.MFRTE(MFRTE),
	
	.V2_M(V2_M),
	.F_RT_M(F_RT_M),
	.MFRTM(MFRTM)
	
	);
	//转发多选器
endmodule
