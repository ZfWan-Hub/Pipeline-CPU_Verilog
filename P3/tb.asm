ori $s0,$0,0x2000
ori $s1,$0,1
addu $s2,$s0,$s1   
sw $s1,4($s0)
loop:
subu $t0,$s1,$0  
lui $t1,3
nop
lw $t2,4($s0)
beq $s1,$t2,loop


