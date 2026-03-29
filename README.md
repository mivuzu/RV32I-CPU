# RV32I-CPU 

This is a simple RISC-V core I am developing as a personal side project. As it stands it only supports the base integer ISA, hence the name. Memory-ordering and environment instructions (`fence`, `fence.tso`, `pause`, `ecall`, `ebreak`) are effetively treated as a `nop`, as are all unknown intructions with the expection of zero instructions, more on that later.

The microarchitecture right now is a pipelined model with 5 stages, very simple branch prediction, size-configurable memory at compile time (8kB to 425kB), and a 25MHz clock. Higher frequencies can be achieved with smaller memory sizes, but for 425kB that is roughly Fmax. Clocks can be easily swapped by changing 2 lines in `src/main.v`.

I haven't extensively tested it, however all I've thrown at it works as expected.

## Build & Run

Commands here are from the Makefile. If you run them as is without changing the Makefile or project at all, a bitstream for the ECP5 EVN will be generated and loaded.

1) Install yosys, nextpnr-ecp5, ecppack and openFPGALoader and ensure you have full access to the FTDI IC on the board, particulary, make sure your user has permissions to access it via USB, and remove the kernel module `ftdi_sio` (if attached at all) by running `sudo rmmod ftdi_sio`, as it interfers with the library used by the program loader (libftdi)
2) Synthesize, place & route, pack:

       make bitstream

3) Connect a serial terminal at 115200 8N1 and load/flash
   
       make load # or make flash
   
   You may also run this command alone without running `make bitstream` first, as it will also build the bitstream if unbuilt.

4) If all went well the 8 configurable LEDs on the board should be turned off. The board is now ready to load and execute programs.i

There is also a `make test` command that will load the bitstream, compile and send `tools/src/prog.S`, execute it, wait for it to finish (it will simply wait for 0.1 seconds) and print the value of the first 3 registers (x1-x3) as well as a small memory section defined in the Makefile.

## Basic Operation

At startup the system will be in state `0`, during this mode PC can read/write memory over UART to the FPGA. CPU execution is also issued via UART, after which the system will be in state `1` and all UART data will be ignored. Zero instructions (first 7 bits zero) will stop CPU execution and make the system return to state `0`.

### Host Command Format

General bit layout of a command:

    [ Transfer Size (size) – 19 bits ] | [ Base Address (base) – 19 bits ] | [ Operation (op) – 2 bits ]

5 byte commands, possibly 1 byte if `op` is `10` or `11`.

Operations:

| op  | Meaning                                                      |
|-----|--------------------------------------------------------------|
| 00  | Memory read of `size` bytes starting at `base`               |
| 01  | Memory write of `size` bytes starting at `base`              |
| 10  | Read CPU register `{command[3], command[7:4]}` (sends 4 bytes) |
| 11  | Start CPU execution                                          |

Naturally, for writes the host must send `size` additional bytes to complete the command, which will be the written data.
As mentioned before commands are ignored during CPU execution.

## Work for the future

- Hardware interrupts
- I/O with UART (MMIO and interrupt driven)
- ISA expansion to RV32GC
- 64-bit (RV64GC)

