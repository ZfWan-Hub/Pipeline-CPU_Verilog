`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:48:26 11/28/2018 
// Design Name: 
// Module Name:    W_reg 
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
module W_reg(
	input [31:0] IR,
	input [31:0] PC8,
	input [31:0] AO,
	input [31:0] DR,
	input [31:0]HI,
	input [31:0]LO,
	input clk,
	input reset,
	output reg [31:0] IR_W,
	output reg [31:0] PC8_W,
	output reg [31:0] AO_W,
	output reg [31:0] DR_W,
	output reg [31:0]HI_W,
	output reg [31:0]LO_W
    );
	 
	 initial begin
			IR_W=0;
			PC8_W=0;
			AO_W=0;
			DR_W=0;
			HI_W=0;
			LO_W=0;
	 end
	 
	 always @(posedge clk)begin
		if(reset)begin
			IR_W=0;
			PC8_W=0;
			AO_W=0;
			DR_W=0;
			HI_W=0;
			LO_W=0;
		end	
		
		else begin
			IR_W=IR;
			PC8_W=PC8;
			AO_W=AO;
			DR_W=DR;
			HI_W=HI;
			LO_W=LO;
		end
		
	 end

endmodule
