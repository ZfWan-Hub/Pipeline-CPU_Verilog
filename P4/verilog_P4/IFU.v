`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:46:47 11/16/2018 
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
	input nPC_sel,
	input zero,
	input [15:0]imm16,
	input [25:0]imm26,
	input j_instr,
	input [31:0]RD1,
	input jr,
	input reset,
	input clk,
	output  [31:0]Instr,
	output reg [31:0] PC
);

	
	reg [31:0] im_reg [1023:0];
	wire [9:0] imaddr;
	wire [31:0] pc;
	
	initial begin
		PC=32'h3000;
		$readmemh("code.txt",im_reg);
	end	
	
	always @( posedge clk)begin
		if(reset)begin
			PC=32'h3000;
		end
		else begin
			if(j_instr)begin
				PC={PC[31:28],imm26,2'b00};
			end
			
			else if(jr)PC=RD1;
			else if(zero&&nPC_sel)begin
				PC=PC+4+{{16{imm16[15]}},imm16}*4;
			end
			
			else  PC=PC+4;
		end
		
		
		
	end
  
    assign pc=PC-32'h3000;
	 assign imaddr=pc[11:2];
	 assign Instr=im_reg[imaddr];

endmodule