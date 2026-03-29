    .section .text
    .globl _start

_start:
    ########################################################
    # Clear working registers
    ########################################################
    addi x1, x0, 0
    addi x2, x0, 0
    addi x3, x0, 0

    ########################################################
    # Group 1: ADDI / ADD / SUB
    # Expect: mem[254] = 7
    ########################################################
    addi x1, x0, 5        # x1 = 5
    addi x2, x0, 7        # x2 = 7
    add  x3, x1, x2       # x3 = 12
    sub  x3, x3, x1       # x3 = 7
    sb   x3, 254(x0)      # mem[254] = 0x07

    ########################################################
    # Group 2: logic immediates and register ops
    #   x1 = 0x0F0  (240)
    #   x2 = 0x0FF  (255)
    #   x3 = x1 ^ x2 = 0x00F (15)
    # Expect: mem[255] = 0x0F
    ########################################################
    addi x1, x0, 0x0F0    # 0000 1111 0000
    addi x2, x0, 0x0FF    # 0000 1111 1111
    xor  x3, x1, x2       # 0000 0000 1111  -> 0x0F

    ori  x1, x1, 0x00F    # 0x0F0 | 0x00F = 0x0FF
    andi x2, x2, 0x0F0    # 0x0FF & 0x0F0 = 0x0F0
    and  x2, x2, x1       # 0x0F0 & 0x0FF = 0x0F0 (sanity)

    sb   x3, 255(x0)      # mem[255] = 0x0F

    ########################################################
    # Group 3: shifts and signed shift
    #   x1 = 1 << 7 = 128
    #   x2 = x1 >> 4 (logical) = 8
    #   x3 = -1 >> 1 (arithmetic) = -1
    # Expect:
    #   mem[256] = 0x08
    #   mem[257] = 0xFF
    ########################################################
    addi x1, x0, 1
    slli x1, x1, 7        # x1 = 128 = 0x00000080
    srli x2, x1, 4        # x2 = 8   = 0x00000008

    addi x3, x0, -1       # x3 = 0xFFFFFFFF
    srai x3, x3, 1        # arithmetic shift keeps sign: 0xFFFFFFFF

    sb   x2, 256(x0)      # mem[256] = 0x08
    sb   x3, 257(x0)      # mem[257] = 0xFF (low byte of -1)

    ########################################################
    # Group 4: SLT / SLTU
    #   x1 = -1 (0xFFFFFFFF)
    #   x2 =  1
    #   slt  x3,x1,x2  -> 1  (signed: -1 < 1)
    #   sltu x1,x2,x0  -> 0  (unsigned: 1 < 0 ? no)
    #   sltu x2,x0,x2  -> 1  (unsigned: 0 < 1 ? yes)
    #   x3 = x3 + x2   -> 1 + 1 = 2
    # Expect: mem[258] = 0x02
    ########################################################
    addi x1, x0, -1       # x1 = 0xFFFFFFFF
    addi x2, x0,  1       # x2 = 1

    slt  x3, x1, x2       # x3 = 1
    sltu x1, x2, x0       # x1 = (1 < 0) ? 1 : 0 = 0
    sltu x2, x0, x2       # x2 = (0 < 1) ? 1 : 0 = 1

    add  x3, x3, x2       # x3 = 1 + 1 = 2
    sb   x3, 258(x0)      # mem[258] = 0x02

    ########################################################
    # Group 5: loads / stores (byte/word)
    # Use scratch word at address 248:
    #   pattern = 0x11223344
    #   sw pattern, 248(x0)
    #   lb  x2,248(x0)  -> 0x44
    #   lbu x3,249(x0)  -> 0x33
    #   x1 = x2 + x3    -> 0x44 + 0x33 = 0x77
    # Expect:
    #   mem[259] = 0x77
    #   final x1=0x77, x2=0x44, x3=0x33
    ########################################################
    li   x1, 0x11223344   # expands to LUI+ADDI using only x1
    sw   x1, 248(x0)

    lb   x2, 248(x0)      # x2 = 0x00000044 (sign-extended, but 0x44 < 0x80)
    lbu  x3, 249(x0)      # x3 = 0x00000033

    add  x1, x2, x3       # x1 = 0x77
    sb   x1, 259(x0)      # mem[259] = 0x77

end:
