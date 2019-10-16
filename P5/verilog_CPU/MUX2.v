`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:39:28 12/01/2018 
// Design Name: 
// Module Name:    MUX2 
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
module MUX2(
	input [31:0] PC8_E,
	input [31:0] PC8_M,
	input [31:0] AO_M,
	input [31:0] WD,
	input [31:0] RF_RD1,
	input [2:0] F_RS_D,
	output reg [31:0] MFRSD,
	
	input [31:0] RF_RD2,
	input [2:0] F_RT_D,
	output reg [31:0] MFRTD,
	



	input [31:0] V1_E,
	input [1:0] F_RS_E,
	output reg[31:0] MFRSE,
	


	input [31:0] V2_E,
	input [1:0] F_RT_E,
	output reg[31:0] MFRTE,
	
	
	input [31:0] V2_M,
	input F_RT_M,
	output [31:0] MFRTM
    );
	
	always @(*)begin
		case(F_RS_D)
			4:MFRSD=PC8_E;
			3:MFRSD=PC8_M;
			2:MFRSD=AO_M;
			1:MFRSD=WD;
			0:MFRSD=RF_RD1;
		endcase
	end
	//MFRSD
	always @(*)begin
		case(F_RT_D)
			4:MFRTD=PC8_E;
			3:MFRTD=PC8_M;
			2:MFRTD=AO_M;
			1:MFRTD=WD;
			0:MFRTD=RF_RD2;
		endcase
	end
	//MFRTD
	always @(*)begin
		case(F_RS_E)
			3:MFRSE=PC8_M;
			2:MFRSE=AO_M;
			1:MFRSE=WD;
			0:MFRSE=V1_E;
		endcase
	end
	//MFRSE
	always @(*)begin
		case(F_RT_E)
			3:MFRTE=PC8_M;
			2:MFRTE=AO_M;
			1:MFRTE=WD;
			0:MFRTE=V2_E;
		endcase
	end
	//MFRTE
	assign MFRTM=F_RT_M ? WD :V2_M;
	//MFRTM
endmodule
