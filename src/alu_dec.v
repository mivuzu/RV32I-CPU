module alu_dec (
  input [1:0] op,
  input [2:0] funct3,
  input 
    op5,
    funct7,
  output reg cin,arith,
  output reg [3:0] sel,
  output reg flag_set, flag_sel
);
  always @* begin
    flag_set=0;
    case (op)
      0:begin {cin,arith,sel}=main_decoder;flag_set=iflag_set; end
      1:{cin,arith,sel}=6'b010000;
      2:{cin,arith,sel}=6'b010011;
      3:{cin,arith,sel}=6'b010011;
    endcase
  end
  reg [5:0] main_decoder;
  reg iflag_set,iflag_sel;
  always @* begin
    iflag_set=0;
    flag_sel=1'bx;
    case (funct3)
      3'b000:main_decoder={4'b0100,{2{op5&&funct7}}};
      3'b010:begin main_decoder=6'b010011;iflag_set=1;flag_sel=0; end
      3'b011:begin main_decoder=6'b010011;iflag_set=1;flag_sel=1; end
      3'b100:main_decoder=6'b001100;
      3'b110:main_decoder=6'b000100;
      3'b111:main_decoder=6'b001000;
      3'b001:main_decoder=6'b010110;
      3'b101:main_decoder={(funct7),5'b10100};
      default:main_decoder=6'bxxxxxx;
    endcase
  end
endmodule
