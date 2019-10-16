`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:06:36 11/28/2018 
// Design Name: 
// Module Name:    MUX 
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
module MUX1(
input [31:0] PC4,
input [31:0] NPC1,
input [31:0] NPC2,
input [31:0] MFRSD,
input zero,
input [3:0]nPC_sel,
output reg [31:0] MUX_PC,

input [31:0] V2,
input [31:0] E32,
input ALUSrc,
output [31:0] MUX_ALU_B,



input [31:0] AO,
input [31:0] DR,
input [31:0] PC8,
input [31:0]HI,
input [31:0]LO,
input [2:0] MemtoReg,
output  [31:0] MUX_WD




    );
	always @(*)begin
		case(nPC_sel)
		4'd0:MUX_PC=PC4;
		4'd1:MUX_PC=zero?NPC1:PC4;
		4'd2:MUX_PC=zero?NPC1:PC4;
		4'd3:MUX_PC=zero?NPC1:PC4;
		4'd4:MUX_PC=zero?NPC1:PC4;
		4'd5:MUX_PC=zero?NPC1:PC4;
		4'd6:MUX_PC=zero?NPC1:PC4;
		4'd7:MUX_PC=NPC2;
		4'd8:MUX_PC=MFRSD;
		endcase
	end
	//MUX_PC
	assign MUX_ALU_B=ALUSrc? E32: V2;
	//MUX_ALU_B

	assign MUX_WD=(MemtoReg==3'b100)?HI:
					(MemtoReg==3'b011)?LO:
					(MemtoReg==3'b010)?PC8:
					(MemtoReg==3'b001)?DR:AO;
	//MUX_WD
	

endmodule
