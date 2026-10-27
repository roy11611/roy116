`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2026/10/12 14:40:20
// Design Name: 
// Module Name: en_1s
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


module en_1s(en, rstn, clk);
output en;
input rstn, clk;
reg[26:0] cnt;

assign en = (cnt == 27'd9_999_999);

always @(posedge clk)
    if(!rstn) cnt <= 27'd0;
    else if (en) cnt <= 27'd0;
    else cnt <= cnt + 1;
    
endmodule
