module register_file (
  input 
    clk,
    we,
    pc_we,
  input [4:0] 
    ra1,
    ra2,
    wa,
  input [31:0] 
    pc_in,
    wd,
  output reg [31:0] 
    rd1,
    rd2,
    pc_out
);
  (* ram_style = "logic" *) 
  reg [31:0] x [31:0];
  reg [31:0] pc;
  integer i;
  always @(negedge clk)
    if (we) if (wa!=0) x[wa]<=wd;
  always @(posedge clk)
    if (pc_we) pc<=pc_in; 
  always @* begin
    rd1=x[ra1];
    rd2=x[ra2];
    pc_out=pc;
  end
endmodule
