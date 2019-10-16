ori $at, $0,0x5678  
lui $a0,0x1234 
addu $at,$at,$a0
subu $s0,$at,$0
ori $a1,$0,1
addu $a2,$a0,$at
sw $a2,4($0)
ori $a3,$0,6
subu $t0,$a3,$a1
lw $t1,-1($t0)
addu $t2,$t1,$t1

loop3:
ori $s7,$ra,0x23
beq $a2,$t1,loop1
lui $t1,0x1256
ori $t2,$t1,0x1111
jr $ra
nop

loop1:
lw $t3,4($0)
lui $t4,20
addu $t5,$t3,$t1
ori $s2,$t5,0x1357
jal loop2
ori $t3,$ra,0x5678

j loop4
ori $s1,$0,1

loop2:
addu $s0,$ra,$t3
ori $s1,$0,20
addu $t4,$t2,$t3
sw $t4,-8($s1)
lw $t5,12($0)
addu $t6,$0,$ra
jal loop3
addu $t1,$t1,$ra
ori $ra,$t6,0
jr $ra
ori $t7,$t6,1

loop4:
nop
addu $0,$t1,$t2
ori $t3,$0,1
beq $t3,$s1,loop4
ori $s1,$s1,0x111
jal loop5
sw $t1,-0x30a4($ra)

loop6:beq $0,$0,loop6
nop

loop5:
lw $t2,-0x30ac($ra)
lw $t3,4($t2)
addu $0,$t2,$t3
sw $ra,4($0)
lw $ra,4($0)
jr $ra
nop

