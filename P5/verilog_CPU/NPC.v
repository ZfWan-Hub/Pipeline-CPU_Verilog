`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:01:29 11/28/2018 
// Design Name: 
// Module Name:    NPC 
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
module NPC(
input [31:0] PC4,
input [15:0] imm16,
input [25:0] imm26,
output [31:0] NPC1,
output [31:0] NPC2
    );
	wire [31:0] PC;
	
	assign PC=PC4-4;
	
	assign NPC1={{14{imm16[15]}},imm16,2'b00}+PC4 ;
	assign NPC2={PC[31:28],imm26,2'b00};
	

endmodule
