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
  wire overlap=(&ad[12:2])&(|ad[1:0]);
  wire ioverlap=(&instr_ad[12:2])&(|instr_ad[1:0]);
  
  genvar i;
  localparam memblks=52; 
  wire [memblks-1:0][3:0][7:0] ebr_a0;
  wire [memblks-1:0][3:0][7:0] ebr_b0;
  generate
    for (i=0;i<memblks;i++) begin
      reduced_memblk blk (
        clk,
        (decoder[i]||(nblk_decoder[i]&overlap))&we,
        (nblk_decoder[i]&overlap)?n_bsel:r_bsel,
        {blk_di[3],(nblk_decoder[i]&overlap)?(overlap_blk_di):(blk_di[2:0])},
        blk_ad&{{52{~(overlap&nblk_decoder[i])}}},
        blk_iad&{{52{~(ioverlap&inblk_decoder[i])}}},
        ebr_a0[i],
        ebr_b0[i]
      );
    end
  endgenerate
  reg [3:0][7:0] blk_di;
  reg [2:0][7:0] overlap_blk_di;
  reg [3:0][12:0] blk_ad,blk_iad;
  reg [3:0][1:0] blk_ofst,blk_iofst;
  reg [3:0] r_bsel,n_bsel;
  integer j;
  always @* begin
    blk_di[0]=ad[1]?(ad[0]?wd[15:8]:wd[23:16]):(ad[0]?wd[31:24]:wd[7:0]);
    blk_di[1]=ad[1]?(ad[0]?wd[23:16]:wd[31:24]):(ad[0]?wd[7:0]:wd[15:8]);
    blk_di[2]=ad[1]?(ad[0]?wd[31:24]:wd[7:0]):(ad[0]?wd[15:8]:wd[23:16]);
    blk_di[3]=ad[1]?(ad[0]?wd[7:0]:wd[15:8]):(ad[0]?wd[23:16]:wd[31:24]);
    //
    overlap_blk_di[0]=ad[1]?(ad[0]?wd[15:8]:wd[23:16]):(wd[31:24]);
    overlap_blk_di[1]=ad[0]?wd[23:16]:wd[31:24];
    overlap_blk_di[2]=wd[31:24];
    //
    blk_ofst[0]={^ad[1:0],ad[0]};
    blk_ofst[1]={ad[1],~ad[0]};
    blk_ofst[2]={~^ad[1:0],ad[0]};
    blk_ofst[3]=~ad[1:0];
    //
    blk_iofst[0]={^instr_ad[1:0],instr_ad[0]};
    blk_iofst[1]={instr_ad[1],~instr_ad[0]};
    blk_iofst[2]={~^instr_ad[1:0],instr_ad[0]};
    blk_iofst[3]=~instr_ad[1:0];
    //
    for (j=0;j<4;j++) begin
      blk_ad[j]=ad+blk_ofst[j];
      blk_iad[j]=instr_ad+blk_iofst[j];
    end

    case (ad[1:0])
      0:r_bsel=bsel[3:0];
      1:r_bsel={bsel[2:0],bsel[3]};
      2:r_bsel={bsel[1:0],bsel[3:2]};
      3:r_bsel={bsel[0],bsel[3:1]};
    endcase
    case (ad[1:0])
      0:n_bsel=bsel[3:0];
      1:n_bsel={3'b0,bsel[3]};
      2:n_bsel={2'b0,bsel[3:2]};
      3:n_bsel={1'b0,bsel[3:1]};
    endcase
    case (p_ad[1:0])
      0:rd={blk_a0[3],blk_a0[2],blk_a0[1],blk_a0[0]};
      1: rd={p_overlap?nblk_a0[0]:blk_a0[0],blk_a0[3],blk_a0[2],blk_a0[1]};
      2: rd={p_overlap?{nblk_a0[1],nblk_a0[0]}:{blk_a0[1],blk_a0[0]},blk_a0[3],blk_a0[2]};
      3: rd={p_overlap?{nblk_a0[2],nblk_a0[1],nblk_a0[0]}:{blk_a0[2],blk_a0[1],blk_a0[0]},blk_a0[3]};
    endcase
    case (p_iad[1:0])
      0: instr_rd={blk_b0[3],blk_b0[2],blk_b0[1],blk_b0[0]};
      1: instr_rd={p_ioverlap?nblk_b0[0]:blk_b0[0],blk_b0[3],blk_b0[2],blk_b0[1]};
      2: instr_rd={p_ioverlap?{nblk_b0[1],nblk_b0[0]}:{blk_b0[1],blk_b0[0]},blk_b0[3],blk_b0[2]};
      3: instr_rd={p_ioverlap?{nblk_b0[2],nblk_b0[1],nblk_b0[0]}:{blk_b0[2],blk_b0[1],blk_b0[0]},blk_b0[3]};
    endcase
  end
  reg p_overlap,p_ioverlap;
  reg [5:0] p_blk,p_iblk,p_nblk,p_inblk;
  reg [1:0] p_ad,p_iad;
  wire [5:0] nblk=ad[18:13]+1,inblk=instr_ad[18:13]+1;
  always @(posedge clk) begin p_overlap<=overlap;p_ioverlap<=ioverlap; p_ad<=ad[1:0];p_iad<=instr_ad[1:0]; p_blk<=ad[18:13]; p_iblk<=instr_ad[18:13]; p_nblk<=nblk; p_inblk<=inblk; end

  reg [63:0] decoder,nblk_decoder,inblk_decoder;
  always @* begin 
    decoder=0;decoder[ad[18:13]]=1;
    nblk_decoder=0;nblk_decoder[nblk]=1; 
    inblk_decoder=0;inblk_decoder[inblk]=1; 
  end

  reg [3:0][7:0] blk_a0,blk_b0;
  reg [2:0][7:0] nblk_a0,nblk_b0;
  always @* begin
    blk_a0=ebr_a0[p_blk]; blk_b0=ebr_b0[p_iblk];
    nblk_a0=ebr_a0[p_nblk][2:0];nblk_b0=ebr_b0[p_inblk][2:0];
  end

endmodule

module reduced_memblk (
 input clk,
 input we,
 input [3:0] r_bsel,
 input [3:0][7:0] blk_di,
 input [3:0][12:0] 
  blk_ad,
  blk_iad,
 output [memblks-1:0][7:0] ebr_a0,
 output [memblks-1:0][7:0] ebr_b0
);
  wire ebr_clk=clk;

  integer j;
  always @* begin
    for (j=0;j<memblks;j++) begin
      ebr_dia[j]={10'b0,blk_di[j]};
      ebr_ada[j]={blk_ad[j][12:2],3'b0};
      ebr_csa[j]=3'b111;
      ebr_cea[j]=1;
      ebr_ocea[j]=1;
      ebr_rsta[j]=0;
      ebr_wea[j]=r_bsel[j]&we;
      //
      ebr_dib[j]=0;
      ebr_adb[j]={blk_iad[j][12:2],3'b0};
      ebr_csb[j]=3'b111;
      ebr_ceb[j]=1;
      ebr_oceb[j]=1;
      ebr_rstb[j]=0;
      ebr_web[j]=0;
    end
  end

  genvar i;
  localparam memblks=4;
  reg [memblks-1:0][17:0] ebr_dia,ebr_dib;
  reg [memblks-1:0][13:0] ebr_ada,ebr_adb;
  reg [memblks-1:0][2:0] ebr_csa,ebr_csb;
  reg [memblks-1:0] ebr_cea,ebr_ceb;
  reg [memblks-1:0] ebr_ocea,ebr_oceb;
  reg [memblks-1:0] ebr_wea,ebr_web;
  reg [memblks-1:0] ebr_rsta,ebr_rstb;
  wire [memblks-1:0][17:0] ebr_doa,ebr_dob;
  generate
    for (i=0;i<memblks;i++) begin
      DP16KD
      #(
        .DATA_WIDTH_A(9),
        .DATA_WIDTH_B(9),
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
        .DOB0(ebr_dob[i][0]), .DOB1(ebr_dob[i][1]), .DOB2(ebr_dob[i][2]), .DOB3(ebr_dob[i][3]), .DOB4(ebr_dob[i][4]), .DOB5(ebr_dob[i][5]), .DOB6(ebr_dob[i][6]), .DOB7(ebr_dob[i][7]), .DOB8(ebr_dob[i][8]), .DOB9(ebr_dob[i][9]), .DOB10(ebr_dob[i][10]), .DOB11(ebr_dob[i][11]), .DOB12(ebr_dob[i][12]), .DOB13(ebr_dob[i][13]), .DOB14(ebr_dob[i][14]), .DOB15(ebr_dob[i][15]), .DOB16(ebr_dob[i][16]), .DOB17(ebr_dob[i][17])
      );
      assign ebr_a0[i]=ebr_doa[i][7:0];
      assign ebr_b0[i]=ebr_dob[i][7:0];
    end
  endgenerate
endmodule

/*
module memory (
 input clk,
 input we,
 input [3:0] bsel,
 input [31:0] wd,
 input [12:0] ad,
 output reg [31:0] rd,
 //
 input [12:0] instr_ad,
 output reg [31:0] instr_rd
);
  wire ebr_clk=clk;
  reg [3:0][7:0] blk_di;
  reg [3:0][12:0] blk_ad,blk_iad;
  reg [3:0][1:0] blk_ofst,blk_iofst;
  reg [3:0] r_bsel;

  integer j;
  always @* begin
    for (j=0;j<4;j++) begin
      blk_ad[j]=ad+blk_ofst[j];
      blk_iad[j]=instr_ad+blk_iofst[j];
      //
      ebr_dia[j]={10'b0,blk_di[j]};
      ebr_ada[j]={blk_ad[j][12:2],3'b0};
      ebr_csa[j]=3'b111;
      ebr_cea[j]=1;
      ebr_ocea[j]=1;
      ebr_rsta[j]=0;
      ebr_wea[j]=r_bsel[j]&we;
      //
      ebr_dib[j]=0;
      ebr_adb[j]={blk_iad[j][12:2],3'b0};
      ebr_csb[j]=3'b111;
      ebr_ceb[j]=1;
      ebr_oceb[j]=1;
      ebr_rstb[j]=0;
      ebr_web[j]=0;
    end
    //
    blk_di[0]=ad[1]?(ad[0]?wd[15:8]:wd[23:16]):(ad[0]?wd[31:24]:wd[7:0]);
    blk_di[1]=ad[1]?(ad[0]?wd[23:16]:wd[31:24]):(ad[0]?wd[7:0]:wd[15:8]);
    blk_di[2]=ad[1]?(ad[0]?wd[31:24]:wd[7:0]):(ad[0]?wd[15:8]:wd[23:16]);
    blk_di[3]=ad[1]?(ad[0]?wd[7:0]:wd[15:8]):(ad[0]?wd[23:16]:wd[31:24]);
    //
    blk_ofst[0]={^ad[1:0],ad[0]};
    blk_ofst[1]={ad[1],~ad[0]};
    blk_ofst[2]={~^ad[1:0],ad[0]};
    blk_ofst[3]=~ad[1:0];
    //
    blk_iofst[0]={^instr_ad[1:0],instr_ad[0]};
    blk_iofst[1]={instr_ad[1],~instr_ad[0]};
    blk_iofst[2]={~^instr_ad[1:0],instr_ad[0]};
    blk_iofst[3]=~instr_ad[1:0];

    case (ad[1:0])
      0:r_bsel=bsel[3:0];
      1:r_bsel={bsel[2:0],bsel[3]};
      2:r_bsel={bsel[1:0],bsel[3:2]};
      3:r_bsel={bsel[0],bsel[3:1]};
    endcase
    case (p_ad[1:0])
      0:rd={ebr_a0[3],ebr_a0[2],ebr_a0[1],ebr_a0[0]};
      1:rd={ebr_a0[0],ebr_a0[3],ebr_a0[2],ebr_a0[1]};
      2:rd={ebr_a0[1],ebr_a0[0],ebr_a0[3],ebr_a0[2]};
      3:rd={ebr_a0[2],ebr_a0[1],ebr_a0[0],ebr_a0[3]};
    endcase
    case (p_iad[1:0])
      0: instr_rd={ebr_b0[3],ebr_b0[2],ebr_b0[1],ebr_b0[0]};
      1: instr_rd={ebr_b0[0],ebr_b0[3],ebr_b0[2],ebr_b0[1]};
      2: instr_rd={ebr_b0[1],ebr_b0[0],ebr_b0[3],ebr_b0[2]};
      3: instr_rd={ebr_b0[2],ebr_b0[1],ebr_b0[0],ebr_b0[3]};
    endcase
    //r_bsel=ad[1]?(ad[0]?{bsel[0],bsel[3:1]}:{bsel[1:0],bsel[3:2]}):(ad[0]?{bsel[2:0],bsel[3]}:{bsel[3:0]});
    //rd=ad[1]?(ad[0]?{ebr_a0[2],ebr_a0[1],ebr_a0[0],ebr_a0[3]}:{ebr_a0[1],ebr_a0[0],ebr_a0[3],ebr_a0[2]}):(ad[0]?{ebr_a0[0],ebr_a0[3],ebr_a0[2],ebr_a0[1]}:{ebr_a0[3],ebr_a0[2],ebr_a0[1],ebr_a0[0]});
    //instr_rd=instr_ad[1]?(instr_ad[0]?{ebr_b0[2],ebr_b0[1],ebr_b0[0],ebr_b0[3]}:{ebr_b0[1],ebr_b0[0],ebr_b0[3],ebr_b0[2]}):(instr_ad[0]?{ebr_b0[0],ebr_b0[3],ebr_b0[2],ebr_b0[1]}:{ebr_b0[3],ebr_b0[2],ebr_b0[1],ebr_b0[0]});
  end
  reg [1:0] p_ad,p_iad;
  always @(posedge clk) begin p_ad<=ad[1:0];p_iad<=instr_ad[1:0]; end

  genvar i;
  localparam memblks=4;
  reg [memblks-1:0][17:0] ebr_dia,ebr_dib;
  reg [memblks-1:0][13:0] ebr_ada,ebr_adb;
  reg [memblks-1:0][2:0] ebr_csa,ebr_csb;
  reg [memblks-1:0] ebr_cea,ebr_ceb;
  reg [memblks-1:0] ebr_ocea,ebr_oceb;
  reg [memblks-1:0] ebr_wea,ebr_web;
  reg [memblks-1:0] ebr_rsta,ebr_rstb;
  wire [memblks-1:0][17:0] ebr_doa,ebr_dob;
  wire [memblks-1:0][7:0] ebr_a0,ebr_a1,ebr_b0,ebr_b1;
  generate
    for (i=0;i<memblks;i++) begin
      DP16KD
      #(
        .DATA_WIDTH_A(9),
        .DATA_WIDTH_B(9),
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
        .DOB0(ebr_dob[i][0]), .DOB1(ebr_dob[i][1]), .DOB2(ebr_dob[i][2]), .DOB3(ebr_dob[i][3]), .DOB4(ebr_dob[i][4]), .DOB5(ebr_dob[i][5]), .DOB6(ebr_dob[i][6]), .DOB7(ebr_dob[i][7]), .DOB8(ebr_dob[i][8]), .DOB9(ebr_dob[i][9]), .DOB10(ebr_dob[i][10]), .DOB11(ebr_dob[i][11]), .DOB12(ebr_dob[i][12]), .DOB13(ebr_dob[i][13]), .DOB14(ebr_dob[i][14]), .DOB15(ebr_dob[i][15]), .DOB16(ebr_dob[i][16]), .DOB17(ebr_dob[i][17])
      );
      assign ebr_a0[i]=ebr_doa[i][7:0];
      assign ebr_a1[i]=ebr_doa[i][16:9];
      assign ebr_b0[i]=ebr_dob[i][7:0];
      assign ebr_b1[i]=ebr_dob[i][16:9];
    end
  endgenerate
endmodule
*/
