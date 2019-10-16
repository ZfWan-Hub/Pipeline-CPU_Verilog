`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:35:51 11/28/2018 
// Design Name: 
// Module Name:    M_reg 
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
module M_reg(
	input [31:0] V2,
	input [31:0] IR,
	input [31:0] AO,
	input [31:0] PC8,
	input clk,
	input reset,
	output reg [31:0] V2_M,
	output reg [31:0] IR_M,
	output reg [31:0] AO_M,
	output reg [31:0] PC8_M
    );
	 
	 initial begin
		V2_M=0;AO_M=0;
			IR_M=0;PC8_M=0;
	 end
	 
	 always @(posedge clk)begin
		if(reset)begin
			V2_M=0;AO_M=0;
			IR_M=0;PC8_M=0;
		end
		
		else begin
			V2_M=V2;AO_M=AO;
			IR_M=IR;PC8_M=PC8;
		end
	 end


endmodule
