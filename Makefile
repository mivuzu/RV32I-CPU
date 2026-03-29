.PHONY: synth one_pass layout bitstream load flash check_usage test test_edit memcmd
DEP_SRC=src/*.v lib/hdl/alu.v lib/hdl/uart.v lib/hdl/pll.v
OPT?=-q
COMP?=.TRELLIS_COMB
BASE?=1020
SIZE?=6
obj/hardware.json: $(DEP_SRC)
	yosys $(OPT) -p "synth_ecp5 -top main -abc9; write_json obj/hardware.json" $(DEP_SRC)
synth: obj/hardware.json
	
obj/hardware.config: obj/hardware.json lib/pins.lpf
	nextpnr-ecp5 $(OPT) --um5g-85k --speed 8 --package CABGA381 --json obj/hardware.json --textcfg obj/hardware.config --lpf lib/pins.lpf --report obj/npr_report.json --threads $$(nproc)
layout: obj/hardware.config
	
obj/hardware.bit: obj/hardware.config
	ecppack --compress --db /opt/oss-cad-suite/share/trellis/database obj/hardware.config obj/hardware.bit
bitstream: obj/hardware.bit

RTLDEPS=src/sim/*.v lib/hdl/uart.v lib/hdl/alu.v
#VLIBS=/opt/oss-cad-suite/share/yosys/lattice/cells_sim_ecp5.v /opt/oss-cad-suite/share/yosys/lattice/common_sim.vh /opt/oss-cad-suite/share/yosys/lattice/ccu2c_sim.vh /opt/oss-cad-suite/share/yosys/lattice/cells_io.vh /opt/oss-cad-suite/share/yosys/lattice/cells_ff.vh /opt/oss-cad-suite/share/yosys/lattice/cells_bb_ecp5.v
IGNOREFLAGS=-Wno-PROCASSINIT -Wno-UNUSEDSIGNAL -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC -Wno-DECLFILENAME
.PHONY: sim
sim/obj/Vmain.h: sim/sim.cpp $(RTLDEPS)
	#verilator -cc  $(RTLDEPS) -I/opt/oss-cad-suite/share/yosys/lattice/ --top-module main -Wall $(IGNOREFLAGS) -exe sim.cpp --trace
	verilator -cc  $(RTLDEPS) -I/opt/oss-cad-suite/share/yosys/lattice/ --top-module main -exe sim.cpp --trace -Wno-lint -Mdir sim/obj
sim/obj/Vmain: sim/obj/Vmain.h
	make -C sim/obj/ -f Vmain.mk
sim: sim/obj/Vmain
	sim/obj/Vmain

	
load: obj/hardware.bit
	openFPGALoader -b ecp5_evn obj/hardware.bit
flash: obj/hardware.bit
	openFPGALoader -b ecp5_evn obj/hardware.bit -f
check_usage:
	cat obj/npr_report.json | jq .utilization$(COMP)
test:
	make load && \
	cd tools/ && \
	make see && \
	make send && \
	sleep .1 && \
	bin/send 12 && bin/receive 0 && \
	bin/send 22 && bin/receive 0 && \
	bin/send 32 && bin/receive 0 && \
	bin/memcmd $(BASE) $(SIZE) 0 && bin/receive 0 && \
	cd ..
test_edit:
	hx tools/src/prog.S && make test
memcmd:
	tools/bin/memcmd $(BASE) $(SIZE) 0 && tools/bin/receive 0
