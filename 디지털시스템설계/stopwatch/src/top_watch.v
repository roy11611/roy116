`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2026/10/19 14:40:38
// Design Name: 
// Module Name: top_watch
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


module top_watch(CLK100MHZ, CPU_RESETN, BTNC, SW, CA, CB, CC, CD, CE, CF, CG, DP, AN);
input CLK100MHZ, CPU_RESETN, BTNC;
input [1:0] SW;
output CA, CB, CC, CD, CE, CF, CG, DP;
output[7:0] AN;

wire en_100khz, en_1khz, en_100hz;
wire inc;
wire[3:0] c0,c1,s0,s1,m0,m1,h0,h1;
wire[6:0] seg;

reg b1, b2;
reg btn_db;
reg btn_prev;

wire pulse = btn_db & ~btn_prev;
wire stop;


clk_div u0 (.en_100khz(en_100khz), .en_1khz(en_1khz), .en_100hz(en_100hz), .rstn(CPU_RESETN), .clk(CLK100MHZ));
assign inc = ~stop & (SW[1] ? en_100khz : en_100hz);
seg_driver  u1(.seg(seg), .AN(AN), .Q0(c0), .Q1(c1), .Q2(s0), .Q3(s1), .Q4(m0), .Q5(m1), .Q6(h0), .Q7(h1) , .rstn(CPU_RESETN), .clk(CLK100MHZ));
assign {CG, CF, CE, CD, CC, CB, CA} = seg;
assign DP = AN[6]&AN[4]&AN[2];

//core
sw_core u2(.c0(c0), .c1(c1), .s0(s0), .s1(s1), .m0(m0), .m1(m1), .h0(h0), .h1(h1), .inc(inc), .rstn(CPU_RESETN), .clk(CLK100MHZ));

//togle
always @(posedge CLK100MHZ)
   begin
   b1 <= BTNC;
   b2 <= b1;
   end
always @(posedge CLK100MHZ)
    if(!CPU_RESETN) btn_db <= 1'b0;
    else if(s0)     btn_db <= b2;

always @(posedge CLK100MHZ)
    if(!CPU_RESETN) btn_prev <= 1'b0;
    else     btn_prev <= btn_db;

tff u3(stop, CLK100MHZ, ~CPU_RESETN, pulse);

endmodule
