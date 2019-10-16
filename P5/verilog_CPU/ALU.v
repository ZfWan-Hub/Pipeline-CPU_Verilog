`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:33:51 11/28/2018 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
	input [31:0] A,
    input [31:0] B,
    input [1:0] ALUOp,
    output reg [31:0] C
    );
	 
	 always @(*)begin
		case (ALUOp)
			2'b00:C=A+B;
			2'b01:C=A-B;
			2'b10:C=A|B;
		endcase
	 end


endmodule
