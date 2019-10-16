`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:12:57 12/16/2018 
// Design Name: 
// Module Name:    BE_EXT 
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
module BE_EXT(
	input [31:0]Addr,
	input [1:0]BEOp,
	output[3:0]BE
    );

	assign BE=(BEOp==0)?4'b1111:
				((BEOp==1)&(Addr[1]==0))?4'b0011:
				((BEOp==1)&(Addr[1]==1))?4'b1100:
				((BEOp==2)&(Addr[1:0]==2'b00))?4'b0001:
				((BEOp==2)&(Addr[1:0]==2'b01))?4'b0010:
				((BEOp==2)&(Addr[1:0]==2'b10))?4'b0100:4'b1000;
				
endmodule
