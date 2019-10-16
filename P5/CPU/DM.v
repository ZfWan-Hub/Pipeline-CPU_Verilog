`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:40:34 11/28/2018 
// Design Name: 
// Module Name:    DM 
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
module DM(
	input [31:0] Addr,
	input [31:0] WD,
	input DMwrite,
	input [31:0] PC8_M,
	input clk,
	input reset,
	output [31:0] dataout
    );
	 
	 reg [31:0] dm_reg [1023:0];
	integer i;
	wire [9:0] addr;
	
	initial begin
		for(i=0;i<1024;i=i+1)begin
				dm_reg[i]=0;
			end
	end
	
	assign addr=Addr[11:2];
	assign dataout= dm_reg[addr];
	
	always@(posedge clk )begin
		if(reset)begin
			for(i=0;i<1024;i=i+1)begin
				dm_reg[i]=0;
			end
		end
		else begin
			if(DMwrite)begin
				dm_reg[addr]=WD;
				$display("@%h: *%h <= %h",  PC8_M-8, Addr,WD);
			end
		end
	end

endmodule
