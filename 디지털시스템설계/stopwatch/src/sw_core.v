`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2026/10/19 14:09:15
// Design Name: 
// Module Name: sw_core
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


module sw_core(c0,c1,s0,s1,m0,m1,h0,h1, inc, rstn, clk);
output [3:0] c0,c1,s0,s1,m0,m1,h0,h1;
input inc, rstn, clk;

wire tc_c0, tc_c1; //1/100s
wire tc_s0, tc_s1; // s
wire tc_m0, tc_m1; // m
wire tc_h0; // h
wire clr_h; // 23->00

assign clr_h = (h1 == 4'd2) && (h0 == 4'd3) &&tc_m1;

cnt10 c0_cnt ( .Q(c0), .TC(tc_c0), .inc(inc), .clr(1'b0), .rstn(rstn), .clk(clk));
cnt10 c1_cnt ( .Q(c1), .TC(tc_c1), .inc(tc_c0), .clr(1'b0), .rstn(rstn), .clk(clk));
cnt10 s0_cnt ( .Q(s0), .TC(tc_s0), .inc(tc_c1), .clr(1'b0), .rstn(rstn), .clk(clk));
cnt6 s1_cnt ( .Q(s1), .TC(tc_s1), .inc(tc_s0), .rstn(rstn), .clk(clk));
cnt10 m0_cnt ( .Q(m0), .TC(tc_m0), .inc(tc_s1), .clr(1'b0), .rstn(rstn), .clk(clk));
cnt6 m1_cnt ( .Q(m1), .TC(tc_m1), .inc(tc_m0),  .rstn(rstn), .clk(clk));
cnt10 h0_cnt ( .Q(h0), .TC(tc_h0), .inc(tc_m1), .clr(clr_h), .rstn(rstn), .clk(clk));
cnt3 h1_cnt ( .Q(h1), .TC(), .inc(tc_h0), .clr(clr_h), .rstn(rstn), .clk(clk));

endmodule
