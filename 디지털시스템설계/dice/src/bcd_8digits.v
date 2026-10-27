`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2026/10/08 14:36:18
// Design Name: 
// Module Name: bcd_8digits
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

module bcd_8digit (Q0,Q1,Q2, Q3, Q4, Q5, Q6, TC, tc6, inc, rstn, clk);
output [3:0] Q0,Q1,Q2, Q3, Q4, Q5, Q6;
output TC, tc6;
input inc, rstn, clk;
wire tc1,tc2, tc3,tc4, tc5;

bcd_count s0(Q0, tc1, inc, rstn, clk);
bcd_count s1(Q1, tc2, tc1, rstn, clk);
bcd_count s2(Q2, tc3, tc2, rstn, clk);
bcd_count s3(Q3, tc4, tc3, rstn, clk);
bcd_count s4(Q4, tc5, tc4, rstn, clk);   
bcd_count s5(Q5, tc6, tc5, rstn, clk);
bcd_count s6(Q6, TC, tc6, rstn, clk);
endmodule
