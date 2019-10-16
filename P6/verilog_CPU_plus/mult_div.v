`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:02:42 12/16/2018 
// Design Name: 
// Module Name:    mult_div 
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
module mult_div(
	input [31:0]A,
	input [31:0]B,
	input [1:0]m_or_d,
	input HI_write,
	input LO_write,
	input start,
	input clk,
	input reset,
	output reg[31:0]HI,
	output reg[31:0]LO,
	output reg Busy
    );
	
	integer count;
	reg mult_en,div_en,multu_en,divu_en;
	reg [31:0] A1;
	reg [31:0]A2;
	
	initial begin
		count=-1;
		mult_en=0;
		div_en=0;
		multu_en=0;
		divu_en=0;
		Busy=0;
		HI=0;
		LO=0;
		A1=0;
		A2=0;
	end
	
	always@(posedge clk)begin
		if(reset)begin
		count=-1;
		mult_en=0;
		div_en=0;
		multu_en=0;
		divu_en=0;
		Busy=0;
		HI=0;
		LO=0;
		A1=0;
		A2=0;
		end
		//
		if(HI_write)HI=A;
		if(LO_write)LO=A;
		
		//
		if(start&(m_or_d==2'b00))mult_en=1;
		else if(start&(m_or_d==2'b01))multu_en=1;
		else if(start&(m_or_d==2'b10))div_en=1;
		else if(start&(m_or_d==2'b11))divu_en=1;
		
		if(start)begin
		A1=A;A2=B;
		end
		if(mult_en|multu_en)begin
			count=count+1;
			if(count==5)begin
				if(multu_en){HI,LO}=A1*A2;
				else if(mult_en){HI,LO}=$signed(A1)*$signed(A2);
				
				Busy=0;
				count=-1;
				mult_en=0;
				multu_en=0;
			end
			else if(count>=0)Busy=1;
		end
		
		else if(div_en|divu_en)begin
			count=count+1;
			if(count==10)begin
				if(divu_en)begin
					LO=A1/A2;
					HI=A1%A2;
				end
				else if(div_en)begin
					LO=$signed(A1)/$signed(A2);
					HI=$signed(A1)%$signed(A2);
				end
				count=-1;
				Busy=0;
				div_en=0;
				divu_en=0;
			end
			else if(count>=0)Busy=1;
		end
		
	end

endmodule
