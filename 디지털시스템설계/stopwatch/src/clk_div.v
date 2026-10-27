`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2026/10/19 13:47:57
// Design Name: 
// Module Name: clk_div
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


module clk_div(en_100khz, en_1khz, en_100hz, rstn, clk);
output en_100khz, en_1khz, en_100hz;
input rstn, clk;
wire tc1,tc2, tc3,tc4, tc5, tc6;

cnt10 t1(.Q(),.TC(tc1),.inc(1'b1), .clr(1'b0),.rstn(rstn),.clk(clk));
cnt10 t2(.Q(),.TC(tc2),.inc(tc1), .clr(1'b0),.rstn(rstn),.clk(clk));
cnt10 t3(.Q(),.TC(tc3),.inc(tc2), .clr(1'b0),.rstn(rstn),.clk(clk));
cnt10 t4(.Q(),.TC(tc4),.inc(tc3), .clr(1'b0),.rstn(rstn),.clk(clk));
cnt10 t5(.Q(),.TC(tc5),.inc(tc4), .clr(1'b0),.rstn(rstn),.clk(clk));
cnt10 t6(.Q(),.TC(tc6),.inc(tc5), .clr(1'b0),.rstn(rstn),.clk(clk));

assign en_100khz = tc3;
assign en_1khz = tc5;
assign en_100hz = tc6;
endmodule
