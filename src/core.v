module core (
  input 
    clk, 
    state,
  output
    core_cede,
  //memory specific
  input [31:0] 
    rd,
    instr_rd,
  output
    we,
  output [3:0]
    bsel,
  output [MABL-1:0] 
    ad,
    instr_ad,
  output [31:0]
    wd,
  //memmgr access
  input [4:0]
    memmgr_ra1,
  output reg [31:0]
    rf_rd1,
  // ..led
    instr,
    pc
);
  parameter MABL=19;

  reg prev_state;
  always @(posedge clk) prev_state<=state;
  wire init=state&&!prev_state;
  wire en=prev_state&&state;
  
  wire [31:0] mem_rd,mem_instr_rd;
  mem_controller u1 (
    clk,
    m_memwe,
    m_funct3,
    s_funct3,
    m_alu[MABL-1:0],
    pc_in[MABL-1:0],
    m_rd2,
    //
    mem_rd,
    mem_instr_rd,
    // memory specific
    rd,
    instr_rd,
    //
    we,
    bsel,
    ad,
    instr_ad,
    wd
  );
  
  //wire instr_we,rf_we,pc_we,temp_we,temp_sel,alu_arith,alu_cin,mem_we;
  wire [1:0] pc_sel,wd_sel;
  wire [2:0] format;
  wire [3:0] alu_sel;
  control_unit u2 (
    en,
    c_funct3,
    alu_flags,
    instr,
    //
    cede,
    mem_we,
    instr_we,
    rf_we,
    pc_we,
    a_sel,
    b_sel,
    alu_cin,
    alu_arith,
    flag_set,
    flag_sel,
    branch,
    pc_sel,
    wd_sel,
    format,
    alu_sel
  );

  wire m_memwe;
  wire [2:0] c_funct3,m_funct3,s_funct3;
  wire [4:0] alu_flags;
  wire [31:0] pc_in,m_rd2,m_alu;
  datapath u3 (
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
    pc_sel,
    wd_sel,
    format,
    alu_sel,
    mem_rd,
    mem_instr_rd,
    //
    core_cede,
    m_memwe,
    c_funct3,
    m_funct3,
    s_funct3,
    alu_flags,
    pc_in,
    m_alu,
    m_rd2,
    instr,
    //
    memmgr_ra1,
    rf_rd1,pc
  );
  //
endmodule
