`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2026/10/19 13:45:37
// Design Name: 
// Module Name: cnt6
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


module cnt6 (Q, TC, inc, rstn, clk);
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
assign fin = (Q == 4'd5)?1:0;
assign TC = fin & inc ;
endmodule
