`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2026/10/19 13:46:37
// Design Name: 
// Module Name: cnt3
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


module cnt3 (Q, TC, inc, clr, rstn, clk);
output [3:0] Q ;
output TC ; // indicate terminal count
input inc, clr, rstn, clk;
reg [3:0] Q;
wire fin; // Q reached terminal value
always @(posedge clk) 
  if(!rstn) Q <= 4'd0; // sychronous reset
  else if(clr) Q <= 4'd0; 
  else if (inc) 
       if(fin) Q <= 4'd0;
       else Q <= Q + 1;
assign fin = (Q == 4'd2)?1:0;
assign TC = fin & inc ;
endmodule
