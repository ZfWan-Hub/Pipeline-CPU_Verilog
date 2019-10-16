`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:24:32 11/28/2018 
// Design Name: 
// Module Name:    E_reg 
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
module E_reg(
	input [31:0] V1,
	input [31:0] V2,
	input [31:0] E32,
	input [31:0] IR,
	input [31:0] PC4,
	input clk,
	input reset,
	input IR_E_clr,
	output reg [31:0] V1_E,
	output reg [31:0] V2_E,
	output reg [31:0] E32_E,
	output reg [31:0] IR_E,
	output reg [31:0] PC8_E
    );
	 
	 initial begin
		V1_E=0;V2_E=0;E32_E=0;
			IR_E=0;PC8_E=0;
	 end
	 
	 always @(posedge clk)begin
		if(reset|IR_E_clr)begin
			V1_E=0;V2_E=0;E32_E=0;
			IR_E=0;PC8_E=0;
		end
		
		else begin
			V1_E=V1;V2_E=V2;E32_E=E32;
			IR_E=IR;PC8_E=PC4+4;
		end
	 end


endmodule
