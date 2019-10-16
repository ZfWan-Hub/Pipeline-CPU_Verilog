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
	output PC_en,
	output IR_D_en,
	output IR_E_clr,
	output [2:0] F_RS_D,
	output [2:0] F_RT_D,
	output [1:0] F_RS_E,
	output [1:0] F_RT_E,
	output F_RT_M
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
	 
	 wire Tuse_RS0,Tuse_RS1;
	 wire Tuse_RT0, Tuse_RT1, Tuse_RT2;
	 reg [1:0] Tnew_E;
	 reg [1:0]Tnew_M;
	 
	 wire beq_D,jr_D,addu_D,subu_D,ori_D,lw_D,sw_D;
	 wire addu_E,subu_E,ori_E,lui_E,lw_E;
	 wire lw_M;
	 
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
	
	assign addu_D=({op_D,func_D}==`addu);
	assign subu_D=({op_D,func_D}==`subu);
	assign ori_D=(op_D==`ori);
	assign lw_D=(op_D==`lw);
	assign sw_D=(op_D==`sw);
	assign beq_D=(op_D==`beq);
	assign jr_D=({op_D,func_D}==`jr);
	
	assign addu_E=({op_E,func_E}==`addu);
	assign subu_E=({op_E,func_E}==`subu);
	assign ori_E=(op_E==`ori);
	assign lui_E=(op_E==`lui);
	assign lw_E=(op_E==`lw);
	assign lw_M=(op_M==`lw);
	assign jal_M=(op_M==`jal);
	
	
	assign Tuse_RS0=beq_D+jr_D;
	assign Tuse_RS1=addu_D+subu_D+ori_D+lw_D+sw_D;
	
	assign Tuse_RT0=beq_D;
	assign Tuse_RT1=addu_D+subu_D;
	assign Tuse_RT2=sw_D;
	
	//Tuse 
	
	always @(*)begin
		if(addu_E|subu_E|ori_E|lui_E)
			Tnew_E=2'b01;
		else if(lw_E)
			Tnew_E=2'b10;
		else Tnew_E=2'b00;
		
		if(lw_M)Tnew_M=2'b01;
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
				
	assign stall=stall_RS|stall_RT;
	
	assign PC_en=!stall;
	assign IR_D_en=!stall;
	assign IR_E_clr=stall;
	
	//暂停控制器
	
	assign F_RS_D=(A1_D!=0)&(A1_D==A3_E)&(Tnew_E==2'b00)&W_E ? 4:
			 (A1_D!=0)&(A1_D==A3_M)&(Tnew_M==2'b00)&jal_M&W_M ? 3:
			 (A1_D!=0)&(A1_D==A3_M)&(Tnew_M==2'b00)&W_M ? 2:
			 (A1_D!=0)&(A1_D==A3_W)&W_W ? 1:0;
			 
	assign F_RT_D=(A2_D!=0)&(A2_D==A3_E)&(Tnew_E==2'b00)&W_E ? 4:
			 (A2_D!=0)&(A2_D==A3_M)&(Tnew_M==2'b00)&jal_M&W_M ? 3:
			 (A2_D!=0)&(A2_D==A3_M)&(Tnew_M==2'b00)&W_M ? 2:
			(A2_D!=0)&(A2_D==A3_W)&W_W ? 1:0;
			 
	assign F_RS_E=(A1_E!=0)&(A1_E==A3_M)&(Tnew_M==2'b00)&jal_M&W_M ? 3:
			 (A1_E!=0)&(A1_E==A3_M)&(Tnew_M==2'b00)&W_M ? 2:
			 (A1_E!=0)&(A1_E==A3_W)&W_W ? 1:0;
	
	assign F_RT_E=(A2_E!=0)&(A2_E==A3_M)&(Tnew_M==2'b00)&jal_M&W_M ? 3:
			(A2_E!=0)&(A2_E==A3_M)&(Tnew_M==2'b00)&W_M ? 2:
			 (A2_E!=0)&(A2_E==A3_W)&W_W ? 1:0;
			 
	assign F_RT_M=(A2_M!=0)&A2_M&(A2_M==A3_W)&W_W ? 1:0;

	//转发多路选择器选择信号
				 
			 

endmodule
