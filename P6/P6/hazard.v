`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:05:58 12/01/2018 
// Design Name: 
// Module Name:    hazard 
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
module hazard(
	input [31:0] IR_D,
	input [31:0] IR_E,
	input [31:0] IR_M,
	input [31:0] IR_W,
	input W_E,
	input W_M,
	input W_W,
	input [4:0] A1_D,
	input [4:0] A2_D,
	input [4:0] A1_E,
	input [4:0] A2_E,
	input [4:0] A2_M,
	input [4:0] A3_E,
	input [4:0] A3_M,
	input [4:0] A3_W,
	input start_E,
	input Busy_E,
	output PC_en,
	output IR_D_en,
	output IR_E_clr,
	output [2:0] F_RS_D,
	output [2:0] F_RT_D,
	output [2:0] F_RS_E,
	output [2:0] F_RT_E,
	output F_RT_M
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
	 
	 wire Tuse_RS0,Tuse_RS1;
	 wire Tuse_RT0, Tuse_RT1, Tuse_RT2;
	 reg [1:0] Tnew_E;
	 reg [1:0]Tnew_M;
	 
	
	 
	wire [5:0]op_D;
	wire [5:0]func_D;
	wire [5:0]op_E;
	wire [5:0]func_E;
	wire [5:0]op_M;
	wire [5:0]func_M;
	
	assign op_D=IR_D[31:26];
	assign func_D=IR_D[5:0];
	assign op_E=IR_E[31:26];
	assign func_E=IR_E[5:0];
	assign op_M=IR_M[31:26];
	assign func_M=IR_M[5:0];
	
	assign cal_r1_D=({op_D,func_D}==`ADD)|({op_D,func_D}==`ADDU)|({op_D,func_D}==`SUB)|
				({op_D,func_D}==`SUBU)|({op_D,func_D}==`SLT)|({op_D,func_D}==`SLTU)|
				({op_D,func_D}==`SLLV)|({op_D,func_D}==`SRLV)|({op_D,func_D}==`SRAV)|
				({op_D,func_D}==`AND)|({op_D,func_D}==`OR)|({op_D,func_D}==`XOR)|({op_D,func_D}==`NOR);
	assign cal_r2_D=({op_D,func_D}==`SLL)|({op_D,func_D}==`SRL)|({op_D,func_D}==`SRA);
	assign cal_i_D=(op_D==`ADDI)|(op_D==`ADDIU)|(op_D==`ANDI)|(op_D==`ORI)|(op_D==`XORI)|
				(op_D==`LUI)|(op_D==`SLTI)|(op_D==`SLTIU);
	assign load_D=(op_D==`LB)|(op_D==`LBU)|(op_D==`LH)|(op_D==`LHU)|(op_D==`LW);
	assign store_D=(op_D==`SW)|(op_D==`SH)|(op_D==`SB);
	assign beq_D=(op_D==`BEQ);
	assign bne_D=(op_D==`BNE);
	assign blez_D=(op_D==`BLEZ);
	assign bgtz_D=(op_D==`BGTZ);
	assign bltz_D=({op_D,A2_D}==`BLTZ);
	assign bgez_D=({op_D,A2_D}==`BGEZ);
	assign j_D=(op_D==`J);
	assign jal_D=(op_D==`JAL);
	assign jalr_D=({op_D,func_D}==`JALR);
	assign jr_D=({op_D,func_D}==`JR);
	assign mult_D=({op_D,func_D}==`MULT);
	assign multu_D=({op_D,func_D}==`MULTU);
	assign div_D=({op_D,func_D}==`DIV);
	assign divu_D=({op_D,func_D}==`DIVU);
	assign mthi_D=({op_D,func_D}==`MTHI);
	assign mtlo_D=({op_D,func_D}==`MTLO);
	assign mfhi_D=({op_D,func_D}==`MFHI);
	assign mflo_D=({op_D,func_D}==`MFLO);
	
	
	assign Tuse_RS0=beq_D+bne_D+blez_D+bgtz_D+bltz_D+bgez_D+jalr_D+jr_D;
	assign Tuse_RS1=cal_r1_D+cal_i_D+load_D+store_D+mult_D+multu_D+div_D+divu_D+mthi_D+mtlo_D;
	
	assign Tuse_RT0=beq_D+bne_D;
	assign Tuse_RT1=cal_r1_D+cal_r2_D+mult_D+multu_D+div_D+divu_D;
	assign Tuse_RT2=store_D;
	
	//Tuse 
	
	assign cal_r1_E=({op_E,func_E}==`ADD)|({op_E,func_E}==`ADDU)|({op_E,func_E}==`SUB)|
				({op_E,func_E}==`SUBU)|({op_E,func_E}==`SLT)|({op_E,func_E}==`SLTU)|
				({op_E,func_E}==`SLLV)|({op_E,func_E}==`SRLV)|({op_E,func_E}==`SRAV)|
				({op_E,func_E}==`AND)|({op_E,func_E}==`OR)|({op_E,func_E}==`XOR)|({op_E,func_E}==`NOR);
	assign cal_r2_E=({op_E,func_E}==`SLL)|({op_E,func_E}==`SRL)|({op_E,func_E}==`SRA);
	assign cal_i_E=(op_E==`ADDI)|(op_E==`ADDIU)|(op_E==`ANDI)|(op_E==`ORI)|(op_E==`XORI)|
				(op_E==`LUI)|(op_E==`SLTI)|(op_E==`SLTIU);
	assign load_E=(op_E==`LB)|(op_E==`LBU)|(op_E==`LH)|(op_E==`LHU)|(op_E==`LW);
	assign load_M=(op_M==`LB)|(op_M==`LBU)|(op_M==`LH)|(op_M==`LHU)|(op_M==`LW);
	assign mfhi_E=({op_E,func_E}==`MFHI);
	assign mflo_E=({op_E,func_E}==`MFLO);
	
	always @(*)begin
		if(cal_r1_E+cal_r2_E+cal_i_E+mfhi_E+mflo_E)
			Tnew_E=2'b01;
		else if(load_E)
			Tnew_E=2'b10;
		else Tnew_E=2'b00;
		
		if(load_M)Tnew_M=2'b01;
		else Tnew_M=2'b00;
	end
	
	//Tnew
	
	assign stall_RS0_E1=Tuse_RS0&(Tnew_E==2'b01)&(A1_D==A3_E)&W_E&(A1_D!=0);
	assign stall_RS0_E2=Tuse_RS0&(Tnew_E==2'b10)&(A1_D==A3_E)&W_E&(A1_D!=0);
	assign stall_RS0_M1=Tuse_RS0&(Tnew_M==2'b01)&(A1_D==A3_M)&W_M&(A1_D!=0);
	assign stall_RS1_E2=Tuse_RS1&(Tnew_E==2'b10)&(A1_D==A3_E)&W_E&(A1_D!=0);
	
	assign stall_RS=stall_RS0_E1|stall_RS0_E2|
				stall_RS0_M1|stall_RS1_E2;
	
	assign stall_RT0_E1=Tuse_RT0&(Tnew_E==2'b01)&(A2_D==A3_E)&W_E&(A2_D!=0);
	assign stall_RT0_E2=Tuse_RT0&(Tnew_E==2'b10)&(A2_D==A3_E)&W_E&(A2_D!=0);
	assign stall_RT0_M1=Tuse_RT0&(Tnew_M==2'b01)&(A2_D==A3_M)&W_M&(A2_D!=0);
	assign stall_RT1_E2=Tuse_RT1&(Tnew_E==2'b10)&(A2_D==A3_E)&W_E&(A2_D!=0);
	
	assign stall_RT=stall_RT0_E1|stall_RT0_E2|
				stall_RT0_M1|stall_RT1_E2;
				
	assign stall_md=(start_E|Busy_E)&(mult_D|multu_D|div_D|divu_D|mfhi_D|mflo_D|mthi_D|mtlo_D);
	
	assign stall=stall_RS|stall_RT|stall_md;
	
	
	assign PC_en=!stall;
	assign IR_D_en=!stall;
	assign IR_E_clr=stall;
	
	//暂停控制器
	
	assign jal_M=(op_M==`JAL);
	assign jalr_M=({op_M,func_M}==`JALR);
	assign mfhi_M=({op_M,func_M}==`MFHI);
	assign mflo_M=({op_M,func_M}==`MFLO);
	
	assign F_RS_D=(A1_D!=0)&(A1_D==A3_E)&(Tnew_E==2'b00)&W_E ? 6:
			 (A1_D!=0)&(A1_D==A3_M)&(Tnew_M==2'b00)&(jal_M|jalr_M)&W_M ? 5:
			 (A1_D!=0)&(A1_D==A3_M)&(Tnew_M==2'b00)&mfhi_M&W_M ? 4:
			 (A1_D!=0)&(A1_D==A3_M)&(Tnew_M==2'b00)&mflo_M&W_M ? 3:
			 (A1_D!=0)&(A1_D==A3_M)&(Tnew_M==2'b00)&W_M ? 2:
			 (A1_D!=0)&(A1_D==A3_W)&W_W ? 1:0;
			 
	assign F_RT_D=(A2_D!=0)&(A2_D==A3_E)&(Tnew_E==2'b00)&W_E ? 6:
			 (A2_D!=0)&(A2_D==A3_M)&(Tnew_M==2'b00)&(jal_M|jalr_M)&W_M ? 5:
			 (A2_D!=0)&(A2_D==A3_M)&(Tnew_M==2'b00)&mfhi_M&W_M ? 4:
			 (A2_D!=0)&(A2_D==A3_M)&(Tnew_M==2'b00)&mflo_M&W_M ? 3:
			 (A2_D!=0)&(A2_D==A3_M)&(Tnew_M==2'b00)&W_M ? 2:
			(A2_D!=0)&(A2_D==A3_W)&W_W ? 1:0;
			 
	assign F_RS_E=(A1_E!=0)&(A1_E==A3_M)&(Tnew_M==2'b00)&(jal_M|jalr_M)&W_M ? 5:
			 (A1_E!=0)&(A1_E==A3_M)&(Tnew_M==2'b00)&mfhi_M&W_M ? 4:
			 (A1_E!=0)&(A1_E==A3_M)&(Tnew_M==2'b00)&mflo_M&W_M ? 3:
			 (A1_E!=0)&(A1_E==A3_M)&(Tnew_M==2'b00)&W_M ? 2:
			 (A1_E!=0)&(A1_E==A3_W)&W_W ? 1:0;
	
	assign F_RT_E=(A2_E!=0)&(A2_E==A3_M)&(Tnew_M==2'b00)&(jal_M|jalr_M)&W_M ? 5:
			(A2_E!=0)&(A2_E==A3_M)&(Tnew_M==2'b00)&mfhi_M&W_M ? 4:
			(A2_E!=0)&(A2_E==A3_M)&(Tnew_M==2'b00)&mflo_M&W_M ? 3:
			(A2_E!=0)&(A2_E==A3_M)&(Tnew_M==2'b00)&W_M ? 2:
			 (A2_E!=0)&(A2_E==A3_W)&W_W ? 1:0;
			 
	assign F_RT_M=(A2_M!=0)&(A2_M==A3_W)&W_W ? 1:0;

	//转发多路选择器选择信号
				 
			 

endmodule
