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
input beq,
input j_instr,
input jr,
output reg [31:0] MUX_PC,

input [31:0] V2,
input [31:0] E32,
input ALUSrc,
output [31:0] MUX_ALU_B,



input [31:0] AO,
input [31:0] DR,
input [31:0] PC8,
input [1:0] MemtoReg,
output reg [31:0] MUX_WD




    );
	always @(*)begin
		if(beq&zero)MUX_PC=NPC1;
		else if(j_instr)MUX_PC=NPC2;
		else if(jr)MUX_PC=MFRSD;
		else MUX_PC=PC4;
	end
	//MUX_PC
	assign MUX_ALU_B=ALUSrc? E32: V2;
	//MUX_ALU_B

	always @(*)begin
		case (MemtoReg)
			2'b00:MUX_WD=AO;
			2'b01:MUX_WD=DR;
			2'b10:MUX_WD=PC8;
		endcase
	end
	//MUX_WD
	
	

endmodule
