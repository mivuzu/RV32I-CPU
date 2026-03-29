module main (input i_clk, input rx, input [1:0] btn, input [7:0] dip, output tx, output reg [7:0] led);
  localparam baudrate=115200;
  localparam mabl=19;

  wire clk6,clk24,clk48,clk96,clk25,clk50,clk100,clk200,clk400;
  pll u_pll (.iclk12(i_clk),.clk6(clk6),.clk24(clk24),.clk48(clk48),.clk96(clk96),.clk25(clk25),.clk50(clk50),.clk100(clk100),.clk200(clk200),.clk400(clk400));
  localparam clkfreq=25_000_000;
  wire clk=clk25;
  //wire clk=i_clk,clk2x=clk24,clk4x=clk48,clk8x=clk96;

  reg state=0;
  reg [1:0] pbtn=0;
  always @(posedge clk) begin
    pbtn[0]<=btn[0];
    pbtn[1]<=pbtn[0];
    if ( (pbtn[1] && !pbtn[0]) || u2_cede || cpu_cede) begin
      pbtn<=0;
      state<=~state;
    end
  end
  
  wire [7:0] u0_data;
  wire u0_ready;
  uart_r #(.CLKFREQ(clkfreq),.BAUDRATE(baudrate)) u0 (clk,rx,u0_ready,u0_data);

  reg u1_en;
  reg [7:0] u1_data;
  wire u1_ready;
  uart_t #(.CLKFREQ(clkfreq),.BAUDRATE(baudrate)) u1 (clk,u1_en,u1_data,u1_ready,tx);
  
  always @* begin
    case (state)
      0:begin
        u1_en=u2_tx_en;
        u1_data=u2_tx_data;
        u3_we=u2_we;
        u3_bsel=u2_bsel;
        u3_wd=u2_wd;
        u3_ad=u2_ad;
        u3_instr_ad=0;
      end
      1:begin
        u1_en=uart_tx_en;
        u1_data=uart_tx_data;
        u3_we=cpu_we;
        u3_bsel=cpu_bsel;
        u3_wd=cpu_wd;
        u3_ad=cpu_ad;
        u3_instr_ad=cpu_instr_ad;
      end
    endcase
  end
  

  wire u2_we,u2_tx_en,u2_cede;
  wire [3:0] u2_bsel;
  wire [4:0] u2_ra1;
  wire [7:0] u2_tx_data;
  wire [mabl-1:0] u2_ad;
  wire [31:0] u2_wd;
  wire u2_rst,rst=u2_rst||(dip[7]);

  memmgr u2 (
    clk,
    state,
    u0_ready,
    u0_data,
    u3_rd,
    rf_rd1,
    u1_ready,
    u2_rst,
    u2_we,
    u2_tx_en,
    u2_cede,
    u2_bsel,
    u2_ra1,
    u2_tx_data,
    u2_ad,
    u2_wd
  );

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

  wire cpu_cede,cpu_we,cpu_adsel;
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
  always @* led=~(
  ~btn[1]?{7'b0,state}:
  dip[7]?
    (dip[1]?
      (dip[0]?pc[31:24]:pc[23:16]):
      (dip[0]?pc[15:8]:pc[7:0])):
    (dip[1]?
      (dip[0]?instr[31:24]:instr[23:16]):
      (dip[0]?instr[15:8]:instr[7:0]))
  );
  

endmodule
