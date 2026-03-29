module memory (
 input clk,clk4x,
 input ad_sel,
 input we,
 input [3:0] bsel,
 input [31:0] wd,
 input [18:0] ad,
 output reg [31:0] rd,
 //
 input [18:0] instr_ad,
 output reg [31:0] instr_rd
);
  wire ebr_clk=clk;
  reg regclk=0;
  always @(posedge clk)
    regclk<=~regclk;

  reg ss=0,pclk=0;
  always @(posedge clk4x) begin
    pclk<=regclk;
    if (regclk!=pclk) ss<=0;
    else ss<=~ss;
  end

  reg [31:0] instr;
  always @(posedge clk4x) begin
    if (!ss)
      instr[15:0]<={b1,b0};
    else
      instr[31:16]<={b1,b0};
  end

  wire [18:0] iada=ad_sel?instr_ad:ad;
  wire [18:0] iadb={iada[18:1]+1,1'b0};
  reg [255:0] decoder_out,b_decoder_out;
  always @* begin
    decoder_out=0;
    b_decoder_out=0;
    decoder_out[iada[18:11]]=1;
    b_decoder_out[iadb[18:11]]=1;
    {bbitsel,abitsel}=bsel;
    {i_b1,i_b0,i_a1,i_a0}=wd;
    instr_rd={b1,b0,a1,a0};
    rd={b1,b0,a1,a0};
  end
  wire [7:0] a0,a1,b0,b1;
  mux256 a0_mux ({384'b0,ebr_a0},iada[18:11],a0);
  mux256 a1_mux ({384'b0,ebr_a1},iada[18:11],a1);
  mux256 b0_mux ({384'b0,ebr_b0},iadb[18:11],b0);
  mux256 b1_mux ({384'b0,ebr_b1},iadb[18:11],b1);

  integer j;
  reg [1:0] abitsel;
  reg [1:0] bbitsel;
  reg [7:0] i_a0,i_a1,i_b0,i_b1;
  always @* begin
    for (j=0;j<memblks;j++) begin
      ebr_dia[j]={1'b0,i_a1,1'b0,i_a0};
      ebr_ada[j]={iada[10:1],2'b0,abitsel};
      ebr_cea[j]=decoder_out[j];
      ebr_ocea[j]=decoder_out[j];
      ebr_wea[j]=decoder_out[j]&we;
      ebr_csa[j]={{3{decoder_out[j]}}};
      ebr_rsta=0;
      ebr_dib[j]={1'b0,i_b1,1'b0,i_b0};
      ebr_adb[j]={iadb[10:1],2'b0,bbitsel};
      ebr_ceb[j]=b_decoder_out[j];
      ebr_oceb[j]=b_decoder_out[j];
      ebr_web[j]=b_decoder_out[j]&we;
      ebr_csb[j]={{3{b_decoder_out[j]}}};
      ebr_rstb=0;
    end
  end

  genvar i;
  //localparam memblks=208;
  localparam memblks=3;
  reg [memblks-1:0][17:0] ebr_dia,ebr_dib;
  reg [memblks-1:0][13:0] ebr_ada,ebr_adb;
  reg [memblks-1:0][2:0] ebr_csa,ebr_csb;
  reg [memblks-1:0] ebr_cea,ebr_ceb;
  reg [memblks-1:0] ebr_ocea,ebr_oceb;
  reg [memblks-1:0] ebr_wea,ebr_web;
  reg [memblks-1:0] ebr_rsta,ebr_rstb;
  wire [memblks-1:0][17:0] ebr_doa,ebr_dob;
  wire [207:0][7:0] ebr_a0,ebr_a1,ebr_b0,ebr_b1;
  generate
    for (i=0;i<memblks;i++) begin
      DP16KD
      #(
        .DATA_WIDTH_A(18),
        .DATA_WIDTH_B(18),
        .WRITEMODE_A("NORMAL"),
        .WRITEMODE_B("NORMAL"),
        .CSDECODE_A("0b111"),
        .CSDECODE_B("0b111"),
        .RESETMODE("ASYNC")
      )
      ebr (
        .DIA0(ebr_dia[i][0]), .DIA1(ebr_dia[i][1]), .DIA2(ebr_dia[i][2]), .DIA3(ebr_dia[i][3]), .DIA4(ebr_dia[i][4]), .DIA5(ebr_dia[i][5]), .DIA6(ebr_dia[i][6]), .DIA7(ebr_dia[i][7]), .DIA8(ebr_dia[i][8]), .DIA9(ebr_dia[i][9]), .DIA10(ebr_dia[i][10]), .DIA11(ebr_dia[i][11]), .DIA12(ebr_dia[i][12]), .DIA13(ebr_dia[i][13]), .DIA14(ebr_dia[i][14]), .DIA15(ebr_dia[i][15]), .DIA16(ebr_dia[i][16]), .DIA17(ebr_dia[i][17]),
        .ADA0(ebr_ada[i][0]), .ADA1(ebr_ada[i][1]), .ADA2(ebr_ada[i][2]), .ADA3(ebr_ada[i][3]), .ADA4(ebr_ada[i][4]), .ADA5(ebr_ada[i][5]), .ADA6(ebr_ada[i][6]), .ADA7(ebr_ada[i][7]), .ADA8(ebr_ada[i][8]), .ADA9(ebr_ada[i][9]), .ADA10(ebr_ada[i][10]), .ADA11(ebr_ada[i][11]), .ADA12(ebr_ada[i][12]), .ADA13(ebr_ada[i][13]),
        .CLKA(ebr_clk),
        .CEA(ebr_cea[i]),
        .OCEA(ebr_ocea[i]),
        .WEA(ebr_wea[i]),
        .CSA0(ebr_csa[i][0]),
        .CSA1(ebr_csa[i][1]),
        .CSA2(ebr_csa[i][2]),
        .RSTA(ebr_rsta[i]),

        .DIB0(ebr_dib[i][0]), .DIB1(ebr_dib[i][1]), .DIB2(ebr_dib[i][2]), .DIB3(ebr_dib[i][3]), .DIB4(ebr_dib[i][4]), .DIB5(ebr_dib[i][5]), .DIB6(ebr_dib[i][6]), .DIB7(ebr_dib[i][7]), .DIB8(ebr_dib[i][8]), .DIB9(ebr_dib[i][9]), .DIB10(ebr_dib[i][10]), .DIB11(ebr_dib[i][11]), .DIB12(ebr_dib[i][12]), .DIB13(ebr_dib[i][13]), .DIB14(ebr_dib[i][14]), .DIB15(ebr_dib[i][15]), .DIB16(ebr_dib[i][16]), .DIB17(ebr_dib[i][17]),
        .ADB0(ebr_adb[i][0]), .ADB1(ebr_adb[i][1]), .ADB2(ebr_adb[i][2]), .ADB3(ebr_adb[i][3]), .ADB4(ebr_adb[i][4]), .ADB5(ebr_adb[i][5]), .ADB6(ebr_adb[i][6]), .ADB7(ebr_adb[i][7]), .ADB8(ebr_adb[i][8]), .ADB9(ebr_adb[i][9]), .ADB10(ebr_adb[i][10]), .ADB11(ebr_adb[i][11]), .ADB12(ebr_adb[i][12]), .ADB13(ebr_adb[i][13]),
        .CLKB(ebr_clk),
        .CEB(ebr_ceb[i]),
        .OCEB(ebr_oceb[i]),
        .WEB(ebr_web[i]),
        .CSB0(ebr_csb[i][0]),
        .CSB1(ebr_csb[i][1]),
        .CSB2(ebr_csb[i][2]),
        .RSTB(ebr_rstb[i]),

        .DOA0(ebr_doa[i][0]), .DOA1(ebr_doa[i][1]), .DOA2(ebr_doa[i][2]), .DOA3(ebr_doa[i][3]), .DOA4(ebr_doa[i][4]), .DOA5(ebr_doa[i][5]), .DOA6(ebr_doa[i][6]), .DOA7(ebr_doa[i][7]), .DOA8(ebr_doa[i][8]), .DOA9(ebr_doa[i][9]), .DOA10(ebr_doa[i][10]), .DOA11(ebr_doa[i][11]), .DOA12(ebr_doa[i][12]), .DOA13(ebr_doa[i][13]), .DOA14(ebr_doa[i][14]), .DOA15(ebr_doa[i][15]), .DOA16(ebr_doa[i][16]), .DOA17(ebr_doa[i][17]),
        .DOB0(ebr_dob[i][0]), .DOB1(ebr_dob[i][1]), .DOB2(ebr_dob[i][2]), .DOB3(ebr_dob[i][3]), .DOB4(ebr_dob[i][4]), .DOB5(ebr_dob[i][5]), .DOB6(ebr_dob[i][6]), .DOB7(ebr_dob[i][7]), .DOB8(ebr_dob[i][8]), .DOB9(ebr_dob[i][9]), .DOB10(ebr_dob[i][10]), .DOB11(ebr_dob[i][11]), .DOB12(ebr_dob[i][12]), .DOB13(ebr_dob[i][13]), .DOB14(ebr_dob[i][14]), .DOB15(ebr_dob[i][15]), .DOB16(ebr_dob[i][16]), .DOB17(ebr_dob[i][17]),
      );
      assign ebr_a0[i]=ebr_doa[i][7:0];
      assign ebr_a1[i]=ebr_doa[i][16:9];
      assign ebr_b0[i]=ebr_dob[i][7:0];
      assign ebr_b1[i]=ebr_dob[i][16:9];
    end
  endgenerate
endmodule

module mux256 (input [255:0][7:0] data, input [7:0] sel, output [7:0] out);
  assign out=data[sel];
endmodule
module mux208 (input [207:0][7:0] data, input [7:0] sel, output [7:0] out);
  assign out=data[sel];
endmodule
