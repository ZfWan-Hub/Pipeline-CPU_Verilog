`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:22:05 12/16/2018 
// Design Name: 
// Module Name:    Data_EXT 
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
module Data_EXT(
	input [31:0]Din,
	input [31:0]Addr,
	input [2:0]Op,
	output reg[31:0]Dout
    );
	 
	 wire [1:0]addr;
	 assign addr=Addr[1:0];
	 
	 always@(*)begin
		case(Op)
			0:Dout=Din;
			1:begin
				if(addr==0)Dout={24'd0,Din[7:0]};
				else if(addr==1)Dout={24'd0,Din[15:8]};
				else if(addr==2)Dout={24'd0,Din[23:16]};
				else Dout={24'd0,Din[31:24]};
			end
			2:begin
				if(addr==0)Dout={{24{Din[7]}},Din[7:0]};
				else if(addr==1)Dout={{24{Din[15]}},Din[15:8]};
				else if(addr==2)Dout={{24{Din[23]}},Din[23:16]};
				else Dout={{24{Din[31]}},Din[31:24]};
			end
			3:begin
				if(addr[1]==0)Dout={16'd0,Din[15:0]};
				else Dout={16'd0,Din[31:16]};
			end
			4:begin
				if(addr[1]==0)Dout={{16{Din[15]}},Din[15:0]};
				else Dout={{16{Din[31]}},Din[31:16]};
			end
		endcase
	 end


endmodule
