`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:38:58 11/28/2018 
// Design Name: 
// Module Name:    D_reg 
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
module D_reg(
input [31:0] IR,
input [31:0] PC4,
input clk,
input reset,
input IR_D_en,
output reg [31:0] IR_D,
output reg [31:0] PC4_D
);

initial begin
	IR_D=0;
	PC4_D=0;
end

always @(posedge clk)begin
	if(reset)begin
	IR_D=0;
	PC4_D=0;
	end
	
	else if(IR_D_en) begin
		IR_D=IR;
		PC4_D=PC4;
	end
end


endmodule
