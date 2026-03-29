    .section .text
    .globl _start

_start:
    addi x1, x0, 0     # score = 0
    addi x2, x0, 5
    addi x3, x0, 5

    ########################################################
    # BEQ: x2 == x3, branch SHOULD be taken
    ########################################################
    beq  x2, x3, 1f      # correct: jump to 1f
    j    beq_fail        # wrong: fallthrough here
1:  addi x1, x1, 1       # bit0: BEQ ok
    j    beq_end
beq_fail:
beq_end:

    ########################################################
    # BNE: x2 != x3, branch SHOULD be taken
    ########################################################
    addi x3, x3, 1       # x3 = 6, x2 = 5
    bne  x2, x3, 2f      # correct: jump to 2f
    j    bne_fail
2:  addi x1, x1, 2       # bit1: BNE ok
    j    bne_end
bne_fail:
bne_end:

    ########################################################
    # BLT (signed): -1 < 1
    ########################################################
    addi x2, x0, -1      # x2 = -1
    addi x3, x0,  1      # x3 = 1
    blt  x2, x3, 3f
    j    blt_fail
3:  addi x1, x1, 4       # bit2
    j    blt_end
blt_fail:
blt_end:

    ########################################################
    # BGE (signed): 1 >= -1
    ########################################################
    bge  x3, x2, 4f
    j    bge_fail
4:  addi x1, x1, 8       # bit3
    j    bge_end
bge_fail:
bge_end:

    ########################################################
    # BLTU: 0 < 1 (unsigned)
    ########################################################
    addi x2, x0, 0
    addi x3, x0, 1
    bltu x2, x3, 5f
    j    bltu_fail
5:  addi x1, x1, 16      # bit4
    j    bltu_end
bltu_fail:
bltu_end:

    ########################################################
    # BGEU: 1 >= 0 (unsigned)
    ########################################################
    bgeu x3, x2, 6f
    j    bgeu_fail
6:  addi x1, x1, 32      # bit5
    j    bgeu_end
bgeu_fail:
bgeu_end:

    ########################################################
    # JAL test
    #   jal x2, jal_target
    #   if we reach jal_target, set bit6
    ########################################################
jal_call_site:
    jal  x2, jal_target   # rd=x2 gets return addr; jump to jal_target
    j    jal_fail         # executed only if JAL is broken

jal_target:
    addi x1, x1, 64       # bit6: JAL ok
    j    jal_after

jal_fail:
    j    jal_after

jal_after:
    ########################################################
    # JALR test (no 'la', no relocations)
    # Use auipc x2,0 to get current PC and add a small offset
    ########################################################
jalr_base:
    auipc x2, 0                             # x2 = PC (of this auipc)
    addi  x2, x2, 16       # x2 = address of jalr_ok
    jalr  x3, x2, 0                         # jump via x2

    # If JALR fails, we land here (fallthrough)
jalr_fail:
    j    branch_test_done

jalr_ok:
    addi x1, x1, 128                        # bit7: JALR ok
    j    branch_test_done

branch_test_done:
    ########################################################
    # Store final score
    ########################################################
    sb   x1, 254(x0)      # expect 0xFF if all bits set

end:
