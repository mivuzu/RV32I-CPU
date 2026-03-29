module control_unit (
  input 
    en,
  input [2:0]
    c_funct3,
  input [4:0]
    alu_flags,
  input [31:0] 
    instr,
  output
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
  output [1:0]
    pc_sel,
    wd_sel,
  output [2:0]
    format,
  output [3:0]
    alu_sel
);

  wire [1:0] alu_op;
  main_dec u0 (
    en,
    branch,
    instr[6:0],
    //
    cede,
    mem_we,
    instr_we,
    rf_we,
    pc_we,
    a_sel,
    b_sel,
    pc_sel,
    wd_sel,
    alu_op
  );

  alu_dec u1 (
    alu_op,
    instr[14:12],
    instr[5],
    instr[30],
    alu_cin,
    alu_arith,
    alu_sel,
    flag_set,
    flag_sel
  );

  branch_dec u2 (
    c_funct3,
    alu_flags,
    branch
  );

  imm_dec u3 (
    instr[6:0],
    format
  );
endmodule
