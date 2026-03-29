    .section .text
    .globl _start

_start:
    ############################################################
    # Clear result area 1024..1025
    ############################################################
    addi x1, x0, 0
    sb   x1, 1020(x0)
    sb   x1, 1021(x0)
    sb   x1, 1022(x0)
    sb   x1, 1023(x0)
    sb   x1, 1024(x0)
    sb   x1, 1025(x0)

    ############################################################
    # PART 1: computational instructions
    # Expected signature after this part: 0x0C
    ############################################################
    addi x1, x0, 5
    addi x2, x0, 3

    add  x3, x1, x2         # 8
    addi x3, x3, -1         # 7
    sub  x3, x3, x2         # 4
    addi x1, x0, 1
    slli x1, x1, 3          # 8
    or   x1, x1, x3         # 8 | 4 = 12 = 0x0C

    ############################################################
    # PART 2: SLT / SLTU
    # Add 0x10 if SLT works, add 0x20 if SLTU works.
    # Expected x1 after this part: 0x3C
    ############################################################
    addi x2, x0, -1
    addi x3, x0, 1

    slt  x2, x2, x3         # signed: -1 < 1 -> 1
    beq  x2, x0, slt_fail
    addi x1, x1, 16
slt_fail:

    addi x2, x0, -1
    sltu x2, x3, x2         # unsigned: 1 < 0xFFFFFFFF -> 1
    beq  x2, x0, sltu_fail
    addi x1, x1, 32
sltu_fail:

    sb   x1, 1020(x0)       # expect 0x3C

    ############################################################
    # PART 3: store/load path
    # Store 0x11223344 at 1016 and read bytes back into 1021..1024
    ############################################################
    lui  x1, 0x11223
    addi x1, x1, 0x344      # x1 = 0x11223344
    sw   x1, 1016(x0)

    lbu  x1, 1016(x0)       # 0x44
    lbu  x2, 1017(x0)       # 0x33
    lbu  x3, 1018(x0)       # 0x22
    
    sb   x1, 1024(x0)       # mem[1024] = 0x44
    sb   x2, 1023(x0)       # mem[1023] = 0x33
    sb   x3, 1022(x0)       # mem[1022] = 0x22

    lbu  x1, 1019(x0)       # 0x11
    sb   x1, 1021(x0)       # mem[1021] = 0x11

    ############################################################
    # PART 4: forward branches
    # If correct, x1 becomes 3.
    ############################################################
    addi x1, x0, 0
    addi x2, x0, 7
    addi x3, x0, 7

    beq  x2, x3, fwd_taken1
    jal  x0, fwd_fail1
fwd_taken1:
    addi x1, x1, 1
fwd_fail1:

    bne  x2, x3, fwd_fail2   # should NOT branch
    addi x1, x1, 2
fwd_fail2:

    ############################################################
    # PART 5: backward branch loop
    # Final x3 should be 10.
    ############################################################
    addi x2, x0, 10
    addi x3, x0, 0

loop_back:
    addi x3, x3, 1
    addi x2, x2, -1
    bne  x2, x0, loop_back

    sb   x3, 1025(x0)        # expect 10 = 0x0A

    ############################################################
    # PART 6: BLT/BGE and BLTU/BGEU
    # Starting x1 = 3
    # Add +4, +8, +16, +32 if each works
    # Expected x1 after this part: 63 = 0x3F
    ############################################################
    addi x2, x0, -1
    addi x3, x0, 1

    blt  x2, x3, signed_lt_ok
    jal  x0, signed_lt_fail
signed_lt_ok:
    addi x1, x1, 4
signed_lt_fail:

    bge  x3, x2, signed_ge_ok
    jal  x0, signed_ge_fail
signed_ge_ok:
    addi x1, x1, 8
signed_ge_fail:

    addi x2, x0, 0
    addi x3, x0, 1

    bltu x2, x3, unsigned_lt_ok
    jal  x0, unsigned_lt_fail
unsigned_lt_ok:
    addi x1, x1, 16
unsigned_lt_fail:

    bgeu x3, x2, unsigned_ge_ok
    jal  x0, unsigned_ge_fail
unsigned_ge_ok:
    addi x1, x1, 32
unsigned_ge_fail:

    ############################################################
    # PART 7: JAL test
    # Add +1 if JAL works
    ############################################################
jal_call_site:
    jal  x2, jal_target
    addi x1, x1, 64          # should be skipped if JAL works
    jal  x0, jal_after

jal_target:
    jalr x3, x2, 16          # x2 points to addi above; +8 skips to jal_after_path
    jal  x0, jal_after

jal_after_path:
    addi x1, x1, 1

jal_after:
    ############################################################
    # PART 8: JALR direct target test without 'la'
    # Add +2 if JALR works
    ############################################################
jalr_base:
    auipc x2, 0
    jalr  x3, x2, 16         # jalr_ok
    addi  x1, x1, 64         # should be skipped if JALR works
    jal   x0, after_jalr

jalr_ok:
    addi x1, x1, 2

after_jalr:
    ############################################################
    # Final verdict:
    # expected x1 here = 66 = 0x42
    # if true, keep mem[1020]=0x3C
    # if false, overwrite mem[1020] with 0xEE
    ############################################################
    addi x2, x0, 66
    beq  x1, x2, final_ok
    addi x3, x0, 0xEE
    sb   x3, 1020(x0)
    jal  x0, end

final_ok:
    addi x3, x0, 0x3C
    sb   x3, 1020(x0)

end:

