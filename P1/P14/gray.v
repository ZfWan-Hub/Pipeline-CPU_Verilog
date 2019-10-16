`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:12:23 10/26/2018 
// Design Name: 
// Module Name:    gray 
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
module gray(
    input Clk,
    input Reset,
    input En,
    output reg [2:0] Output,
    output reg Overflow
    );
	
	 reg [2:0]Output1;
	 
	initial begin
		Output=3'b000;
		Overflow=0;
		Output1=3'b000;
	end
	
	always @(posedge Clk)begin
		if(Reset)begin
		Output1=0;
		Overflow=0;
		end
		else begin
			if(En)begin
				if(Output1==7)begin
				Output1=0;
				Overflow=1;
				end
				
				else begin
					Output1=Output1+1;
				end
		   end
		end
		case(Output1)
			
			0:Output=3'b000;
			1:Output=3'b001;
			2:Output=3'b011;
			3:Output=3'b010;
			4:Output=3'b110;
			5:Output=3'b111;
			6:Output=3'b101;
			7:Output=3'b100;
		endcase
		
	end

endmodule
