module fsm (
  input 
    clk,
    state,
    memctrl_ready,
  input [31:0]
    instr,
  output reg
    cede,
  output reg [2:0]
    instr_stg,
  output reg [3:0]
    cpu_state
);
  
  reg [2:0] instr_stg=0;
  reg [3:0] cpu_state=0;
  //
  reg [2:0] n_instr_stg;
  reg [3:0] n_cpu_state;

  always @(posedge clk) begin
    instr_stg<=n_instr_stg;
    cpu_state<=n_cpu_state;
  end
  
  always @* begin
    n_cpu_state=cpu_state;
    n_instr_stg=instr_stg;
    cede=0;
    case (state)
      0:begin
        n_cpu_state=0;
        n_instr_stg=0;
      end
      1:case (cpu_state)
        0: n_cpu_state=1;
        1: n_cpu_state=2; 
        2:
        case (instr[6:0])
          //7'b0000011:case (instr[14:12])
          //  default:case (instr_stg) //all memory read instructions
          //    0: n_instr_stg=1; //drive alu_c to memctrl's ad, set cmd, set en
          //    1: begin //save to regfile
          //      n_instr_stg=0;
          //      n_cpu_state=1;
          //    end
          //  endcase
          //endcase
          //7'b0100011:case (instr[14:12])
          //  default:case (instr_stg) //all memory write instructions
          //    0: n_instr_stg=1;
          //    1: begin
          //      n_instr_stg=0;
          //      n_cpu_state=1;
          //    end
          //  endcase
          //endcase
          7'b0:begin
            cede=1;
          end
          default:begin // unspecified instructions are assumed to take 1 cycle
            n_cpu_state=2;
          end
        endcase
        //*/
      endcase
    endcase
  end    
endmodule
