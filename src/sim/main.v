module main (input clk, we, toggle, input [3:0] bsel, input [mabl-1:0] ad, input [31:0] wd, output cpu_cede);
  localparam baudrate=115200;
  localparam mabl=19;

  reg state=0;
  always @(posedge clk) begin
    if ( toggle || cpu_cede&&state) begin
      state<=~state;
    end
  end
    
  always @* begin
    case (state)
      0:begin
        u3_we=we;
        u3_bsel=bsel;
        u3_wd=wd;
        u3_ad=ad;
        u3_instr_ad=0;
      end
      1:begin
        u3_we=cpu_we;
        u3_bsel=cpu_bsel;
        u3_wd=cpu_wd;
        u3_ad=cpu_ad;
        u3_instr_ad=cpu_instr_ad;
      end
    endcase
  end
  
  reg u3_we;
  reg [3:0] u3_bsel;
  reg [mabl-1:0] u3_ad,u3_instr_ad;
  reg [31:0] u3_wd;
  //
  wire [31:0] u3_rd,u3_instr_rd;
  
  memory u3 (
    clk,
    u3_we,
    u3_bsel,
    u3_wd,
    u3_ad,
    u3_rd,
    u3_instr_ad,
    u3_instr_rd
  );

  wire cpu_we,cpu_adsel;
  wire [3:0] cpu_bsel;
  wire [mabl-1:0] cpu_ad,cpu_instr_ad;
  wire [31:0] cpu_wd;
  wire [31:0] rf_rd1,instr,pc;
  core u4 (
    clk,
    state,
    //
    cpu_cede,
    //// memory specific
    u3_rd,
    u3_instr_rd,
    //
    cpu_we,
    cpu_bsel,
    cpu_ad,
    cpu_instr_ad,
    cpu_wd,
    //// memmgr
    u2_ra1,
    rf_rd1,
    //// led </3
    instr,
    pc
  );

  wire uart_tx_en=0,uart_rx_we=0,uart_tx_we=0,uart_wait=0;
  wire [7:0] uart_tx_data=0,uart_rx_wd=0,uart_tx_wd=0;
  wire [10:0] uart_rx_ad=0,uart_tx_ad=0;
  //
  wire [3:0] uart_rx_state,uart_tx_state;
  /*
  wire uart_tx_en,uart_rx_we,uart_tx_we,uart_wait;
  wire [7:0] uart_tx_data,uart_rx_wd,uart_tx_wd;
  wire [smabl-1:0] uart_rx_ad,uart_tx_ad;
  //
  wire [3:0] uart_rx_state,uart_tx_state;
  uart u5 (
    clk,
    state&u0_ready,
    u1_ready,
    u0_data,
    uart_tx_en,
    uart_wait,
    uart_tx_data,
    u3_rdc,
    u3_rdb,
    uart_rx_we,
    uart_tx_we,
    uart_rx_wd,
    uart_tx_wd,
    uart_rx_ad,
    uart_tx_ad
    //
    ,uart_rx_state,uart_tx_state
  );
  */
  
  //always @* led=255;
  

endmodule
