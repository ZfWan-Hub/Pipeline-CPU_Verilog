`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:19:01 11/24/2018 
// Design Name: 
// Module Name:    ewdw 
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
module ewdw(
input [5:0]op,
output ALUSrc
    );

assign 
ALUSrc=(op==6'b001101)||(op==6'b100011)||(op==6'b101011)||(op==6'b001111);

endmodule
