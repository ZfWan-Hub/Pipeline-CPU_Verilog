`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:29:33 11/28/2018 
// Design Name: 
// Module Name:    IFU 
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
module IFU(
input [31:0] mux_pc,
input clk,
input reset,
input PC_en,
output [31:0] IR,
output [31:0] PC4
    );
	 
	 reg [31:0] PC;
	 wire [9:0] pc10;
	 reg [31:0] im_reg [1023:0];
	 
	 initial begin
		PC=32'h3000;
		$readmemh("code.txt",im_reg);
	 end
	 
always @(posedge clk)begin
	if(reset)PC=32'h3000;
	else if(PC_en)
		PC=mux_pc;
	
end

assign pc10=PC[11:2];
assign IR=im_reg[pc10];
assign PC4=PC+4;

endmodule
