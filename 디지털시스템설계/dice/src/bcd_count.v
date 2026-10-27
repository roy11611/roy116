`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2026/10/12 16:10:57
// Design Name: 
// Module Name: bcd_count
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

module bcd_count (Q, TC, inc, rstn, clk);
output [3:0] Q ;
output TC ; // indicate terminal count
input inc, rstn, clk;
reg [3:0] Q;
wire fin; // Q reached terminal value
always @(posedge clk) 
  if(!rstn) Q <= 4'd0; // sychronous reset
  else if (inc) 
       if(fin) Q <= 4'd0;
       else Q <= Q + 1;
assign fin = (Q == 4'd9)?1:0;
assign TC = fin & inc ;
endmodule

