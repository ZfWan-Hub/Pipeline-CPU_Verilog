`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:52:56 11/16/2018 
// Design Name: 
// Module Name:    EXT 
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
module EXT(
    input [15:0] imm16,
    input [1:0] EXTOp,
    output reg [31:0] imm32
    );
	 
	 always @(*)begin
		case (EXTOp)
			2'b00:imm32={16'd0,imm16};
			2'b01:imm32={{16{imm16[15]}},imm16};
			2'b10:imm32={imm16,16'd0};
		endcase
	 end


endmodule
