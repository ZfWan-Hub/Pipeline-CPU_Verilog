`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:24:56 10/26/2018 
// Design Name: 
// Module Name:    ext 
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
module ext(
    input [15:0] imm,
    input [1:0] EOp,
    output reg [31:0] ext
    );
	
	always @(*)begin
		
		case(EOp)
			2'b00:
						begin
							if(imm[15])ext<={16'b1111_1111_1111_1111,imm};
							else ext<={16'd0,imm};
						end
			2'b01:ext<={16'd0,imm};
			2'b10:ext<={imm,16'd0};
			2'b11:
						begin
							if(imm[15])ext<={14'b11_1111_1111_1111,imm,2'b00};
							else ext<={14'd0,imm,2'b00};
						end
						
		endcase
	end

endmodule
