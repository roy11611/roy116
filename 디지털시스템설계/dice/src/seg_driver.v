`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2026/10/12 14:00:58
// Design Name: 
// Module Name: seg_driver
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


module seg_driver(seg,AN,Q0,Q1,Q2,Q3,Q4,Q5,Q6,Q7,rstn,clk);
output [6:0]seg;
output [7:0]AN;
input [3:0] Q0,Q1,Q2,Q3,Q4,Q5,Q6,Q7;
input rstn, clk;
reg [6:0]seg;
reg [16:0] cnt;
reg [2:0] sel;
reg [3:0] bcd;
wire en = (cnt == 17'd99999);

// creat en
always @(posedge clk)
    if(!rstn)       cnt <= 17'd0;
    else if(en)  cnt <= 17'd0;
    else            cnt <= cnt + 1;
    
// choice place counter
always @(posedge clk)
    if(!rstn)        sel <= 3'd0;
    else if(en)   sel <= sel + 1;
    
// 8:1 mux    
always @(*)
    case(sel)
    3'd0: bcd = Q0;
    3'd1: bcd = Q1;
    3'd2: bcd = Q2;
    3'd3: bcd = Q3;
    3'd4: bcd = Q4;
    3'd5: bcd = Q5;
    3'd6: bcd = Q6;
    3'd7: bcd = Q7;
     endcase
//AN decoder    
assign AN = ~(8'b0000_0001 << sel);
//bcd -> 7seg
always @(*)
    case(bcd)
    4'd0: seg = 7'b1000000;
    4'd1: seg = 7'b1111001;
    4'd2: seg = 7'b0100100;
    4'd3: seg = 7'b0110000;
    4'd4: seg = 7'b0011001;
    4'd5: seg = 7'b0010010;
    4'd6: seg = 7'b0000010;
    4'd7: seg = 7'b1111000;
    4'd8: seg = 7'b0000000;
    4'd9: seg = 7'b0010000;
    default: seg = 7'b1111111;
    endcase
endmodule













