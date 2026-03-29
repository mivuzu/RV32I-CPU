/*
module memory (
 input clk,
 input we,
 input [3:0] bsel,
 input [31:0] wd,
 input [18:0] ad,
 output reg [31:0] rd,
 //
 input [18:0] instr_ad,
 output reg [31:0] instr_rd
);
  reg [7:0] mem [2047:0];
  always @(posedge clk) begin
    if (bsel[0]&we) mem[ad]<=wd[7:0];
    if (bsel[1]&we) mem[ad+1]<=wd[15:8];
    if (bsel[2]&we) mem[ad+2]<=wd[23:16];
    if (bsel[3]&we) mem[ad+3]<=wd[31:24];
    //
    rd<={mem[ad+3],mem[ad+2],mem[ad+1],mem[ad]};
    instr_rd<={mem[instr_ad+3],mem[instr_ad+2],mem[instr_ad+1],mem[instr_ad]};
  end
  //always @* begin
  //  rd={mem[ad+3],mem[ad+2],mem[ad+1],mem[ad]};
  //  instr_rd={mem[instr_ad+3],mem[instr_ad+2],mem[instr_ad+1],mem[instr_ad]};
  //end
endmodule
*/

module DP16KD (
  input DIA0, DIA1, DIA2, DIA3, DIA4, DIA5, DIA6, DIA7, DIA8, DIA9, DIA10, DIA11, DIA12, DIA13, DIA14, DIA15, DIA16, DIA17,
  input ADA0, ADA1, ADA2, ADA3, ADA4, ADA5, ADA6, ADA7, ADA8, ADA9, ADA10, ADA11, ADA12, ADA13,
  input CLKA,CEA,OCEA,WEA,
  input CSA0, CSA1, CSA2,
  input RSTA,
  input DIB0, DIB1, DIB2, DIB3, DIB4, DIB5, DIB6, DIB7, DIB8, DIB9, DIB10, DIB11, DIB12, DIB13, DIB14, DIB15, DIB16, DIB17,
  input ADB0, ADB1, ADB2, ADB3, ADB4, ADB5, ADB6, ADB7, ADB8, ADB9, ADB10, ADB11, ADB12, ADB13,
  input CLKB,CEB,OCEB,WEB,
  input CSB0, CSB1, CSB2,
  input RSTB,
  output DOA0, DOA1, DOA2, DOA3, DOA4, DOA5, DOA6, DOA7, DOA8, DOA9, DOA10, DOA11, DOA12, DOA13, DOA14, DOA15, DOA16, DOA17,
  output DOB0, DOB1, DOB2, DOB3, DOB4, DOB5, DOB6, DOB7, DOB8, DOB9, DOB10, DOB11, DOB12, DOB13, DOB14, DOB15, DOB16, DOB17
);  
  parameter DATA_WIDTH_A=9;
  parameter DATA_WIDTH_B=9;
  parameter WRITEMODE_A="NORMAL";
  parameter WRITEMODE_B="NORMAL";
  parameter CSDECODE_A="0b111";
  parameter CSDECODE_B="0b111";
  parameter RESETMODE="ASYNC";
  wire [17:0] dia = {
      DIA17, DIA16, DIA15, DIA14, DIA13, DIA12, DIA11, DIA10, DIA9,
      DIA8, DIA7, DIA6, DIA5, DIA4, DIA3, DIA2, DIA1, DIA0
  };
  wire [17:0] dib = {
      DIB17, DIB16, DIB15, DIB14, DIB13, DIB12, DIB11, DIB10, DIB9,
      DIB8, DIB7, DIB6, DIB5, DIB4, DIB3, DIB2, DIB1, DIB0
  };
  wire [13:0] ada = {
      ADA13, ADA12, ADA11, ADA10, ADA9, ADA8, ADA7,
      ADA6, ADA5, ADA4, ADA3, ADA2, ADA1, ADA0
  };
  wire [13:0] adb = {
      ADB13, ADB12, ADB11, ADB10, ADB9, ADB8, ADB7,
      ADB6, ADB5, ADB4, ADB3, ADB2, ADB1, ADB0
  };
  wire [2:0] csa = {CSA2, CSA1, CSA0};
  wire [2:0] csb = {CSB2, CSB1, CSB0};
  //
  reg [17:0] doa;
  assign {
      DOA17, DOA16, DOA15, DOA14, DOA13, DOA12, DOA11, DOA10, DOA9,
      DOA8, DOA7, DOA6, DOA5, DOA4, DOA3, DOA2, DOA1, DOA0
  } = doa;
  reg [17:0] dob; 
  assign {
      DOB17, DOB16, DOB15, DOB14, DOB13, DOB12, DOB11, DOB10, DOB9,
      DOB8, DOB7, DOB6, DOB5, DOB4, DOB3, DOB2, DOB1, DOB0
  } = dob;

  
  reg [8:0] mem [2048];
  always @(posedge CLKA) begin
    if (WEA) mem[ada[13:3]]<=dia[8:0];
    if (WEB) mem[adb[13:3]]<=dib[8:0];
    doa[8:0]<=mem[ada[13:3]];
    dob[8:0]<=mem[adb[13:3]];
    doa[17:9]<=0;
    dob[17:9]<=0;
  end
endmodule

module pll (input iclk12, output clk6, output clk24, output clk48, output clk96, output clk25, output clk50, output clk100, output clk200, output clk400, output clk600);
endmodule
