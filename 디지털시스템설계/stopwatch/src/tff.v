`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2026/10/19 14:37:44
// Design Name: 
// Module Name: tff
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module tff(q, clk, reset, en);

output q;
input clk, reset, en;
reg q;
always @(posedge reset or negedge clk)
    if(reset) q <= 1'b0;
    else if (en) q <= ~q;
endmodule
