`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:04:18 10/26/2018 
// Design Name: 
// Module Name:    string 
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
module string(
	input clk,
	input clr,
	input [7:0] in,
	output reg out=0
    );

	integer state=0;
	
	always @( posedge clk or posedge clr)begin
		if(clr)begin
			state<=0;
			out<=0;
		end
		else  begin
		
		case(state)
			0:begin
				if(in>="0"&&in<="9")state<=1;
				else state<=4;
				out<=(in>="0"&&in<="9");
			end
			1:begin
				if(in=="+"||in=="*")state<=2;
				else state<=4;
				out<=0;
			end
			2:begin
				if(in>="0"&&in<="9")state<=3;
				else state<=4;
				out<=(in>="0"&&in<="9");
			end
			3:begin
				if(in=="+"||in=="*")state<=2;
				else state<=4;
				out<=0;
			end
			4:begin
			state<=4;
			out<=0;
			end
		endcase
		
		end
	end
	
	
	

endmodule
