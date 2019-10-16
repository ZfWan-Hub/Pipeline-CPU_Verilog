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
	 input [4:0] s,
    input [4:0] ALUOp,
    output reg [31:0] C
    );
	 
	 always @(*)begin
		case (ALUOp)
			5'd0:C=A+B;
			5'd1:C=A-B;
			5'd2:C=$signed(A)<$signed(B)?1:0;
			5'd3:C=A<B?1:0;
			5'd4:C=B<<s;
			5'd5:C=B>>s;
			5'd6:C=$signed(B)>>>$signed(s);
			5'd7:C=B<<(A[4:0]);
			5'd8:C=B>>(A[4:0]);
			5'd9:C=$signed(B)>>>$signed(A[4:0]);
			5'd10:C=A&B;
			5'd11:C=A|B;
			5'd12:C=A^B;
			5'd13:C=~(A|B);
		endcase
	 end


endmodule
