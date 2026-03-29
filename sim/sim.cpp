#include "obj/Vmain.h"
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <fcntl.h>

unsigned long sim_time=0;
Vmain* dut;
VerilatedVcdC* vcd;

void cycle() {
    dut->clk=0;
    dut->eval();
    vcd->dump(sim_time);
    sim_time++;
    //if (dut->u0_ready) printf("(n)%lu: %d %02x\n",(sim_time)/2,dut->u0_ready,dut->u0_data);
    dut->clk=1;
    dut->eval();
    vcd->dump(sim_time);
    sim_time++;
    //if (dut->u0_ready) printf("%lu: %d %02x\n",(sim_time)/2,dut->u0_ready,dut->u0_data);
}

int main (int argc, char** argv) {
  //Verilated::commandArgs(argc,argv);
  Verilated::traceEverOn(true);
  //Vmain* dut=new Vmain;
  dut=new Vmain;
  //VerilatedVcdC* vcd=new VerilatedVcdC;
  vcd=new VerilatedVcdC;
  dut->trace(vcd,99);
  vcd->open("sim/wave.vcd");

  printf("clk initial value %d\n",dut->clk);
  int ret;
  int dtfd=open(argc>1?argv[1]:"tools/bin/prog.out",O_RDONLY);
  if (dtfd==-1) {
    printf("could not open file for reading\n");
    return 1;
  }
  const uint progsize=512;
  unsigned char dbuff [progsize];
  //lseek(dtfd,0x40,SEEK_SET); // for riscv64 binaries
  lseek(dtfd,0x34,SEEK_SET);
  uint i;
  for (i=0;i<progsize;i++) {
    if ((i&3)==3) {
      read(dtfd,&dbuff[i-3],4);
      //printf("%02x ",dbuff[i]);
      int last_word=(dbuff[i-3]|(dbuff[i-2]<<8)|(dbuff[i-1]<<16)|(dbuff[i]<<24));
      //printf("0x%08x\n",last_word);
      if (last_word == 0x00005e41)
        break;
      else {
        dut->wd=last_word;
        dut->we=1;
        dut->bsel=15;
        dut->ad=i-3;
        cycle();
        printf("%d %08x\n",i-3,last_word);
      }
    }
  }
  dut->we=0;
  cycle();
  i=i-3;
  //printf("%u\n",i);
  ret=close(dtfd);

  dut->toggle=1;
  cycle();
  dut->toggle=0;

  while (!dut->cpu_cede && sim_time<=1000) cycle();
  for (int i=0;i<8;i++) cycle();
  
  //wait one baud before transmitting
  //

  //for (int i=0;i<20;i++) {
  //  dut->clk=0;
  //  dut->eval();
  //  dut->clk=1;
  //  dut->eval();
  //}
  //for (int i=0;i<20;i++) {
  //  std::cout<<sim_time<<": "<<(int)dut->u0_ready<<std::endl;
  //  cycle();
  //}
  //std::cout<<(int)dut->u0_ready<<std::endl;
  vcd->close();
  delete vcd;
  delete dut;
}
