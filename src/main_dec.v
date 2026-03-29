module main_dec (
	input 
    en,
    branch,
  input [6:0] 
    opcode,
  output reg  
    cede,
    mem_we,
    instr_we,
    rf_we,
    pc_we, 
    a_sel,
    b_sel,
  output reg [1:0]
    pc_sel,
    wd_sel,
    alu_op
);

    always @* begin
      cede=0;
      mem_we=0;
      instr_we=0;
      rf_we=0;
      pc_we=0;
      a_sel=1'bx;
      b_sel=1'bx;
      alu_op=2'bxx;
      pc_sel=2'bxx;
      wd_sel=2'bxx;

      if (en) begin
        case (opcode)
          7'b0110111:begin //lui
            rf_we=1;
            wd_sel=1; //imm
            alu_op=1; //add
            //
            pc_sel=0; //pc+4
            pc_we=1;
            instr_we=1;
          end
          7'b0010111:begin //auipc
            rf_we=1;
            wd_sel=0; //alu
            a_sel=1; //pc
            b_sel=1; //imm
            alu_op=1; //add
            //
            pc_sel=0;
            pc_we=1;
            instr_we=1;
          end
          7'b1101111:begin //jal
            rf_we=1;
            wd_sel=2; //pc+4
            a_sel=1;
            b_sel=1;
            alu_op=1;
            //
            pc_sel=1; //pc+imm
            pc_we=1;
            instr_we=1;
          end
          7'b1100111:begin //jalr
            rf_we=1;
            wd_sel=2;
            a_sel=1;
            b_sel=0;
            alu_op=1;
            //
            pc_sel=2; //rs1+imm
            pc_we=1;
            instr_we=1;
          end
          7'b1100011:begin //branch
            a_sel=0;
            b_sel=0;
            alu_op=2'b1x; //subtract
            //
            //if (branch) pc_sel=2'b1x;
            //else pc_sel=0;
            pc_sel=3; //predict
            pc_we=1;
            instr_we=1;
          end
          7'b0000011:begin //load
            rf_we=1;
            wd_sel=3; //memory read port - masked per funct3
            a_sel=0;
            b_sel=1;
            alu_op=1;
            //
            pc_sel=0;
            pc_we=1;
            instr_we=1;
          end
          7'b0100011:begin //store
            a_sel=0;
            b_sel=1;
            alu_op=1;
            mem_we=1; // written data will be masked per funct3 as well
            //
            pc_sel=0;
            pc_we=1;
            instr_we=1;
          end
          7'b0010011:begin //register-immediate computational
            rf_we=1;
            wd_sel=0;
            a_sel=0;
            b_sel=1;
            alu_op=0; //infer from instruction
            //
            pc_sel=0;
            pc_we=1;
            instr_we=1;
          end
          7'b0110011:begin //register-register computational
            rf_we=1;
            wd_sel=0;
            a_sel=0;
            b_sel=0;
            alu_op=0;
            //
            pc_sel=0;
            pc_we=1;
            instr_we=1;
          end
          7'b0:begin //cede
            cede=1;
          end
        endcase
      end
    end
endmodule
