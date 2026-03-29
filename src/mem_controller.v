module mem_controller (
  input 
    clk,
    mem_we,
  input [2:0] 
    m_funct3,
    s_funct3,
  input [MABL-1:0]
    mem_ad,
    mem_instr_ad,
  input [31:0] 
    mem_wd,
  output reg [31:0]
    mem_rd,
    mem_instr_rd,
  // memory specific ports
  input [31:0] 
    rd,
    instr_rd,
  output reg
    we,
  output reg [3:0]
    bsel,
  output reg [MABL-1:0]
    ad,
    instr_ad,
  output reg [31:0]
    wd
);
  /* 
    the purpose of this module is to abstract the actual memory interface from the cpu
    if it ever gets deployed in a system with a different type of memory, only this 
    module should be changed.
  */
  
  parameter MABL=19;

  always @* begin
    case (s_funct3[1:0])
      2'b00:mem_rd={{24{rd[7]&(~s_funct3[2])}},rd[7:0]};
      2'b01:mem_rd={{16{rd[15]&(~s_funct3[2])}},rd[15:0]};
      2'b10:mem_rd=rd;
      2'b11:mem_rd=rd;
    endcase
    case (m_funct3[1:0])
      2'b00:bsel=4'b0001;
      2'b01:bsel=4'b0011;
      2'b10:bsel=4'b1111;
      2'b11:bsel=4'b1111;
    endcase
    mem_instr_rd=instr_rd;
    //
    we=mem_we;
    ad=mem_ad;
    instr_ad=mem_instr_ad;
    wd=mem_wd;
  end
endmodule
