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
	input [3:0]BE,
	input [31:0] WD,
	input DMwrite,
	input [31:0] PC8_M,
	input clk,
	input reset,
	output [31:0] dataout
    );
	 
	 reg [31:0] dm_reg [4095:0];
	integer i;
	wire [11:0] addr;
	reg [31:0]WDnew;
	
	initial begin
		for(i=0;i<4096;i=i+1)begin
				dm_reg[i]=0;
			end
	end
	
	assign addr=Addr[13:2];
	assign dataout= dm_reg[addr];
	
	always@(posedge clk )begin
		if(reset)begin
			for(i=0;i<4096;i=i+1)begin
				dm_reg[i]=0;
			end
		end
		else begin
			if(DMwrite)begin
				case(BE)
			   4'b1111:WDnew=WD;
				4'b0011:WDnew={dataout[31:16],WD[15:0]};
				4'b1100:WDnew={WD[15:0],dataout[15:0]};
				4'b0001:WDnew={dataout[31:8],WD[7:0]};
				4'b0010:WDnew={dataout[31:16],WD[7:0],dataout[7:0]};
				4'b0100:WDnew={dataout[31:24],WD[7:0],dataout[15:0]};
				4'b1000:WDnew={WD[7:0],dataout[23:0]};
				endcase
				dm_reg[addr]=WDnew;
				$display("%d@%h: *%h <= %h",$time,PC8_M-8, {Addr[31:2],2'b00},WDnew);
			end
		end
	end

endmodule
