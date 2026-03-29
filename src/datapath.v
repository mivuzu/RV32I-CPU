module datapath (
  input
    clk,
    init,
    en,
    cede,
    instr_we,
    mem_we,
    rf_we,
    pc_we,
    a_sel,
    b_sel,
    alu_cin,
    alu_arith,
    flag_set,
    flag_sel,
    branch,
  input [1:0]
    pc_sel,
    wd_sel,
  input [2:0]
    format,
  input [3:0]
    alu_sel,
  input [31:0]
    mem_rd,
    instr_rd,
  output
    core_cede,
  output reg
    m_memwe,
  output reg [2:0]
    c_funct3,
    m_funct3,
    s_funct3,
  output [4:0]
    alu_flags,
  output reg [31:0]
    pc_in,
    m_alu,
    m_rd2,
    instr,
  //
  input [4:0] 
    memmgr_ra1,  
  output [31:0] 
    rf_rd1,
    pc
);
  parameter INIT_ADDR=0;
  
  reg [31:0] imm;
  always @* begin
    case (format)
        0: imm={{20{instr[31]}},instr[31:20]}; //I
        1: imm={{20{instr[31]}},instr[31:25],instr[11:7]}; //S
        2: imm={{19{instr[31]}},instr[31],instr[7],instr[30:25],instr[11:8],1'b0}; //B
        3: imm={instr[31:12],12'b0}; //U
        default: imm={{11{instr[31]}},instr[31],instr[19:12],instr[20],instr[30:21],1'b0}; //J
    endcase
  end

  reg [31:0] rf_wd;
  wire [31:0] rf_rd2;
  register_file u2 (
    clk,
    s_rfwe&&en,
    (en || init) && f_en,
    en?instr[19:15]:memmgr_ra1,
    instr[24:20],
    s_rd,
    {pc_in[31:1],1'b0},
    rf_wd,
    //
    rf_rd1,
    rf_rd2,
    pc
  );

  wire [31:0] pc_next=pc+4;
  wire [31:0] transfer=(pc_sel[1]&&!pc_sel[0]?d_mux_rd1:pc)+imm;
  always @* begin
    if (s_flagset) rf_wd=s_flagsel?{31'b0,~s_aluflags[2]}:{31'b0,s_aluflags[1]};
    else
    rf_wd=
      s_wdsel[1]?
        (s_wdsel[0]?s_memrd:s_pcnext):
        (s_wdsel[0]?s_imm:s_alu);
    // wd: 000:alu; 001:imm; 010:pc_next; 011:mem_rd;
    if (init) pc_in=INIT_ADDR;
    else 
    pc_in=misprediction?c_prediction?(c_pcnext):(c_transfer):((^pc_sel)|((&pc_sel)&prediction))?transfer:pc_next;
    // pc_in: 00:pc_next 01:pc+imm 10:rs1+imm 11:predict
  end
  reg [31:0] alu_a,alu_b,alu_c;
  alu u3 (
    c_alucin,
    c_aluarith,
    c_alusel,
    alu_a,
    alu_b,
    //
    alu_flags,
    alu_c
  );
  always @* begin
    alu_a=(c_asel?c_pc:c_mux_rd1);
    // 00: rd1; 01: pc;
    alu_b=(c_bsel?c_imm:c_mux_rd2);
    // 00: rd2; 01: imm;
  end

  //pipeline path: load, decode, compute, memory, save
  //
  reg true_instr_we;
  reg [31:0] instr_reg;
  always @(posedge clk) begin
    true_instr_we<=(init)||(en&&d_en);
    if (true_instr_we) instr_reg<=instr_rd;
  end
  always @* instr=true_instr_we?instr_rd:instr_reg;
  //
  reg [31:0]
    d_transfer,
    d_pc,
    d_ipcnext;
  //
  reg [31:0]
    c_rd1,
    c_rd2,
    c_imm,
    c_transfer,
    c_pc,
    c_ipcnext,
    c_pcnext;
  reg [4:0]
    c_rd,
    c_rs1,
    c_rs2;
  reg [3:0]
    c_alusel;
  reg [1:0]
    c_pcsel,
    c_wdsel;
  reg
    c_cede,
    c_rfwe,
    c_asel,
    c_bsel,
    c_aluarith,
    c_alucin,
    c_flagset,
    c_flagsel,
    c_memwe,
    c_prediction;
  //
  reg [31:0]
    m_imm,
    m_pcnext;
  reg [4:0]
    m_aluflags,
    m_rd,
    m_rs2;
  reg [1:0]
    m_wdsel;
  reg
    m_cede,
    m_rfwe,
    m_flagset,
    m_flagsel;
  //
  reg [31:0]
    s_imm,
    s_alu,
    s_memrd=mem_rd,
    s_pcnext;
  reg [4:0]
    s_aluflags,
    s_rd;
  reg [1:0]
    s_wdsel;
  reg
    s_cede,
    s_rfwe,
    s_flagset,
    s_flagsel,
    s_validrd;

  reg
    f_en,f_flush,
    d_en,d_flush,
    c_en,c_flush,
    m_en,m_flush,
    s_en,s_flush;
  always @(posedge clk) begin
    //if (init)
    //  instr<=instr_rd;
    if (en) begin
      //
      if (d_en) begin
        //instr<=instr_rd;
        d_transfer<=transfer;
        d_pc<=pc;
        d_ipcnext<=pc_next;
      end
      //
      if (c_en) begin
        c_rd1<=rf_rd1;
        c_rd2<=rf_rd2;
        c_imm<=imm;
        c_transfer<=transfer;
        c_pc<=pc;
        c_ipcnext<=d_ipcnext;
        c_pcnext<=pc_next;

        c_rd<=c_flush?0:instr[11:7];
        c_rs1<=c_flush?0:instr[19:15];
        c_rs2<=c_flush?0:instr[24:20];
        c_rfwe<=c_flush?0:rf_we;
        c_wdsel<=c_flush?0:wd_sel;
        c_pcsel<=c_flush?0:pc_sel;
        c_asel<=c_flush?0:a_sel;
        c_bsel<=c_flush?0:b_sel;
        c_alusel<=c_flush?0:alu_sel;
        c_aluarith<=c_flush?0:alu_arith;
        c_alucin<=c_flush?0:alu_cin;
        c_flagset<=c_flush?0:flag_set;
        c_flagsel<=c_flush?0:flag_sel;
        c_memwe<=c_flush?0:mem_we;
        c_funct3<=c_flush?0:instr[14:12];
        c_cede<=c_flush?0:cede;
        c_prediction<=c_flush?0:prediction;
      end
      //
      if (m_en) begin
        m_rd2<=c_mux_rd2;
        m_imm<=c_imm;
        m_alu<=alu_c;
        m_pcnext<=c_pcnext;
        
        m_rd<=m_flush?0:c_rd;
        m_rs2<=m_flush?0:c_rs2;
        m_rfwe<=m_flush?0:c_rfwe;
        m_flagset<=m_flush?0:c_flagset;
        m_flagsel<=m_flush?0:c_flagsel;
        m_aluflags<=m_flush?0:alu_flags;
        m_wdsel<=m_flush?0:c_wdsel;
        m_memwe<=m_flush?0:c_memwe;
        m_funct3<=m_flush?0:c_funct3;
        m_cede<=m_flush?0:c_cede;
      end
      //
      if (s_en) begin
        s_imm<=m_imm;
        s_alu<=m_alu;
        //s_memrd<=mem_rd;
        s_pcnext<=m_pcnext;

        s_rd<=s_flush?0:m_rd;
        s_rfwe<=s_flush?0:m_rfwe;
        s_flagset<=s_flush?0:m_flagset;
        s_flagsel<=s_flush?0:m_flagsel;
        s_aluflags<=s_flush?0:m_aluflags;
        s_wdsel<=s_flush?0:m_wdsel;
        s_funct3<=s_flush?0:m_funct3;
        s_cede<=s_flush?0:m_cede;
      end
    end
  end
  
  reg [31:0] 
    d_mux_rd1,
    c_mux_rd1,c_mux_rd2,
    m_rfwd,
    backup_rfwd;
  always @* begin
    d_mux_rd1=d_mux_rd1_sel[1]?rf_wd:d_mux_rd1_sel[0]?m_rfwd:rf_rd1;
    c_mux_rd1=c_mux_rd1_sel[1]?(c_mux_rd1_sel[0]?backup_rfwd:rf_wd):(c_mux_rd1_sel[0]?m_rfwd:c_rd1);
    c_mux_rd2=c_mux_rd2_sel[1]?(c_mux_rd2_sel[0]?backup_rfwd:rf_wd):(c_mux_rd2_sel[0]?m_rfwd:c_rd2);

    if (m_flagset) m_rfwd=m_flagsel?{31'b0,~m_aluflags[2]}:{31'b0,m_aluflags[1]};
    else
    m_rfwd=
      m_wdsel[1]?
        m_pcnext:
        (m_wdsel[0]?m_imm:m_alu);
  end
  reg [4:0] backup_rd;
  reg backup_rfwe;
  always @(posedge clk) begin backup_rfwd<=rf_wd;backup_rd<=s_rd;backup_rfwe=s_rfwe; end

  wire
    prediction,
    misprediction;
  wire [1:0] 
    d_mux_rd1_sel,
    c_mux_rd1_sel,
    c_mux_rd2_sel;
  wire [4:0] d_rs1=instr[19:15];
  wire instr31=instr[31];
  hazard_handling_unit u4 (
    clk,
    en,
    c_rfwe,
    m_rfwe,
    s_rfwe,
    backup_rfwe,
    instr31,
    c_prediction,
    branch,
    pc_sel,
    c_pcsel,
    m_wdsel,
    d_rs1,
    c_rs1,
    c_rs2,
    c_rd,
    m_rd,
    s_rd,
    backup_rd,
    f_en,f_flush,
    d_en,d_flush,
    c_en,c_flush,
    m_en,m_flush,
    s_en,s_flush,
    prediction,
    misprediction,
    d_mux_rd1_sel,
    c_mux_rd1_sel,
    c_mux_rd2_sel
  );
  assign core_cede=s_cede&&en;
endmodule

module hazard_handling_unit (
  input
    clk,
    en,
    c_rfwe,
    m_rfwe,
    s_rfwe,
    backup_rfwe,
    instr31,
    c_prediction,
    branch,
  input [1:0]
    pc_sel,
    c_pcsel,
    m_wdsel,
  input [4:0]
    d_rs1,
    c_rs1,
    c_rs2,
    c_rd,
    m_rd,
    s_rd,
    backup_rd,
  output reg
    f_en,f_flush,
    d_en,d_flush,
    c_en,c_flush,
    m_en,m_flush,
    s_en,s_flush,
    prediction,
    misprediction,
  output reg [1:0]
    d_mux_rd1_sel,
    c_mux_rd1_sel,
    c_mux_rd2_sel
);
  reg d_rs1_dh,c_rs1_dh,c_rs2_dh;
  reg stall_d,stall_c;
  reg 
    forward_m2d_rs1,
    forward_s2d_rs1,
    forward_m2c_rs1,
    forward_m2c_rs2,
    forward_s2c_rs1,
    forward_s2c_rs2,
    forward_backup2c_rs1,
    forward_backup2c_rs2;
  always @* begin
    d_rs1_dh=((d_rs1==c_rd && c_rfwe)||(d_rs1==m_rd && m_rfwe)||(d_rs1==s_rd && s_rfwe)) && pc_sel==2 && d_rs1!=0;
    c_rs1_dh=((c_rs1==m_rd && m_rfwe)||(c_rs1==s_rd && s_rfwe)||(c_rs1==backup_rd && backup_rfwe && prev_stallc)) && c_rs1!=0;
    c_rs2_dh=((c_rs2==m_rd && m_rfwe)||(c_rs2==s_rd && s_rfwe)||(c_rs2==backup_rd && backup_rfwe && prev_stallc)) && c_rs2!=0;
    //
    stall_d=d_rs1_dh&&(d_rs1==c_rd||(d_rs1==m_rd && m_wdsel==3));
    stall_c=(c_rs1_dh||c_rs2_dh)&&((c_rs1==m_rd||c_rs2==m_rd) && m_rfwe && m_wdsel==3);
    //
    forward_m2d_rs1=d_rs1_dh&&d_rs1==m_rd;
    forward_s2d_rs1=d_rs1_dh;
    forward_m2c_rs1=c_rs1_dh&&c_rs1==m_rd;
    forward_s2c_rs1=c_rs1_dh&&c_rs1==s_rd;
    forward_backup2c_rs1=c_rs1_dh;
    forward_m2c_rs2=c_rs2_dh&&c_rs2==m_rd;
    forward_s2c_rs2=c_rs2_dh&&c_rs2==s_rd;
    forward_backup2c_rs2=c_rs2_dh;
    //
    prediction=instr31;
    misprediction=c_pcsel==3 && c_prediction!=branch;
    //
    f_en=!stall_d&&!stall_c;
    f_flush=misprediction;
    d_en=!stall_d&&!stall_c;
    d_flush=misprediction;
    c_en=!stall_c;
    c_flush=misprediction||stall_d;
    m_en=1;
    m_flush=stall_c;
    s_en=1;
    s_flush=0;
    //
    if (forward_m2d_rs1) d_mux_rd1_sel=1;
    else if (forward_s2d_rs1) d_mux_rd1_sel=2'b1x;
    else d_mux_rd1_sel=0;
    //
    if (forward_m2c_rs1) c_mux_rd1_sel=1;
    else if (forward_s2c_rs1) c_mux_rd1_sel=2;
    else if (forward_backup2c_rs1) c_mux_rd1_sel=3;
    else c_mux_rd1_sel=0;
    //
    if (forward_m2c_rs2) c_mux_rd2_sel=1;
    else if (forward_s2c_rs2) c_mux_rd2_sel=2;
    else if (forward_backup2c_rs2) c_mux_rd2_sel=3;
    else c_mux_rd2_sel=0;
  end
  reg prev_stallc;
  always @(posedge clk) prev_stallc<=stall_c;
endmodule
