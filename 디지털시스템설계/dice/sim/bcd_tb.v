`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2026/10/12 13:43:38
// Design Name: 
// Module Name: bcd_tb
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


module bcd_tb;
reg inc, rstn, clk;
wire [3:0] Q0,Q1,Q2, Q3, Q4, Q5, Q6, Q7;
wire TC;

bcd_8digit uut (Q0,Q1,Q2, Q3, Q4, Q5, Q6, Q7,TC, inc, rstn, clk);

initial clk = 1'b0;
always #5 clk = ~clk;

initial begin
    rstn =  1'b0; inc = 1'b0;
    #20 rstn = 1'b1;
    #10 inc = 1'b1;
    #(10*1200) inc = 1'b0;
    #50 $finish;
end

initial
    $monitor ("%t: %d%d%d%d%d%d%d%d TC=%b", $time, Q7,Q6,Q5,Q4,Q3,Q2,Q1,Q0,TC);
endmodule
