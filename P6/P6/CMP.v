`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:21:35 11/28/2018 
// Design Name: 
// Module Name:    CMP 
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
module CMP(
	input [31:0] D1,
	input [31:0] D2,
	input [3:0]nPC_sel,
	output reg zero
    );
	 always@(*)begin
		case(nPC_sel)
			4'd1:zero=(D1==D2);
			4'd2:zero=(D1!=D2);
			4'd3:zero=($signed(D1)<=0);
			4'd4:zero=($signed(D1)>0);
			4'd5:zero=($signed(D1)<0);
			4'd6:zero=($signed(D1)>=0);
		endcase
	 end


endmodule
