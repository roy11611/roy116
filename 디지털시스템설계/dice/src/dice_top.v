`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2026/10/12 14:43:38
// Design Name: 
// Module Name: dice_top
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

module dice_top(CLK100MHZ, CPU_RESETN, BTNC, CA, CB, CC, CD, CE, CF, CG, DP, AN);
input CLK100MHZ, CPU_RESETN, BTNC;
output CA, CB, CC, CD, CE, CF, CG, DP;
output[7:0] AN;

wire[3:0] Q0,Q1;
wire tc1;
wire t01;
wire[6:0] seg;
wire s0;
wire stop;

reg b1, b2;
reg btn_db;
reg btn_prev;
wire pulse = btn_db & ~btn_prev;

bcd_8digit u0 (.TC(t01), .tc6(s0), .inc(1'b1), .rstn(CPU_RESETN), .clk(CLK100MHZ));

bcd   dice1(Q0, tc1, t01 & ~stop,CPU_RESETN,CLK100MHZ);
bcd   dice2(Q1,    , tc1,        CPU_RESETN,CLK100MHZ);

seg_driver  u2(seg, AN, Q0,Q1,4'd15, 4'd15,4'd15, 4'd15, 4'd15, 4'd15, CPU_RESETN, CLK100MHZ);

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
assign {CG, CF, CE, CD, CC, CB, CA} = seg;
assign DP = 1'b1;

endmodule
