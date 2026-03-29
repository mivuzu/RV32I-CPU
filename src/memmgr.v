`define base cmd[20:2]
`define size cmd[39:21]

module memmgr (
  input clk,
  input rst,
  input rx_ready,
  input [7:0] rx_data,
  input [31:0] rd,
  input [31:0] rd1,
  input tx_ready,
  output reg sysrst,we,
  output reg tx_en,
  output reg cede,
  output reg [3:0] bsel,
  output reg [4:0] ra1,
  output reg [7:0] tx_data,
  output reg [18:0] ad,
  output reg [31:0] wd
);
  reg hold=0;
  
  reg [3:0] state=0;
  reg [3:0] cmd_rcv=0;
  reg [3:0] r_stg=0;
  reg [3:0] w_stg=0;
  reg [39:0] cmd;
  //
  reg tx_cnt=0,rx_cnt=0;
  always @(posedge clk) begin
    if (!rst)
      case (state)
        0:
        if (sysrst && hold) begin sysrst<=0; hold<=0; end
        else if (sysrst) hold<=1;
        else if (cede) begin cede<=0; end
        else if (rx_ready) begin
          case (cmd_rcv)
            0:begin
              if (rx_data==255) begin sysrst<=1; hold<=0; end
              else if (rx_data[1:0]==3) cede<=1;
              else if (rx_data[1:0]==2) begin
                cmd[7:0]<=rx_data;
                state<=3;
              end
              else begin
                cmd_rcv++;
                cmd[7:0]<=rx_data;
              end
            end
            1:begin
              cmd_rcv++;
              cmd[15:8]<=rx_data;
            end
            2:begin
              cmd_rcv++;
              cmd[23:16]<=rx_data;
            end
            3:begin
              cmd_rcv++;
              cmd[31:24]<=rx_data;
            end
            4:begin
              cmd_rcv<=0;
              cmd[39:32]<=rx_data;
              if (cmd[0]) state<=2;
              else state<=1;
            end
          endcase  
        end
        1:
        if ( `size != 0)
          case (r_stg)
            0:begin
              r_stg++;
              ad<= `base ;
            end
            1:r_stg++;
            2:begin
              r_stg++;
              tx_data<=rd[7:0];
              tx_en<=1;
              ad++;
              `size --;
            end
            3:if (tx_ready) begin
              tx_data<=rd[7:0];
              ad++;
              `size --;
            end
          endcase
        else begin
          r_stg<=0;
          tx_en<=0;
          ad<=0;
          tx_cnt<=0;
          state<=0;
        end
        2:
        if ( `size != 0)
          case (w_stg)
            0:begin
              w_stg++;
              ad<= `base ;
            end
            1:
            if (we) begin
              we<=0;
              ad++;
              //if ( cmd[2] && rx_cnt || (!cmd[2] && !rx_cnt) ) ad<=ad+2;
            end
            else if (rx_ready) begin
              wd[7:0]<=rx_data;
              bsel<=4'b0001;
              we<=1;
              `size --;
            end
          endcase
        else begin
          rx_cnt<=0;
          w_stg<=0;
          we<=0;
          ad<=0;
          state<=0;
        end
        3:begin
          case (r_stg)
          0:begin
            r_stg++;
            ra1<={cmd[3],cmd[7:4]};
          end
          1:begin
            r_stg++;
            tx_data<=rd1[7:0];
            tx_en<=1;
          end
          2: r_stg++;
          3: if (tx_ready) begin
            tx_data<=rd1[15:8];
            r_stg++;
          end
          4: if (tx_ready) begin
            tx_data<=rd1[23:16];
            r_stg++;
          end
          5: if (tx_ready) begin
            tx_data<=rd1[31:24];
            r_stg++;
          end
          6: r_stg++;
          7:begin
            r_stg<=0;
            tx_en<=0;
            state<=0;
          end
          endcase
        end
      endcase
    else begin
      cmd_rcv<=0;
      cmd<=0;
      cede<=0;
    end
  end 
  always @* wd[31:8]=0;
endmodule
