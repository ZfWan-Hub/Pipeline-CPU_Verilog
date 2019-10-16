loop1:
ori $t0,$0,0x5678
lui $t1,0x1234
ori $t2,$t1,0x4321
ori $t3,$0,2
beq $t1,$t3,loop1
nop
addu $t4,$t3,$t1
sw $t0,0($0)
jal loop2
nop
sw $t1,4($0)
lw $t2,2($t3)
loop3:
beq $t1,$t2,loop3
loop2:
subu $t5,$t0,$t3
addu $t5,$t5,$t3
jr $ra
