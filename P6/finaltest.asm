ori $1,$0,-100
lui $2,100
add $1,$2,$1
sw $1,0($0)
lw $2,0($0)
addu $3,$2,$0
lw $3,0($0)
subu $4,$0,$3
lh $4,0($0)
add $5,$4,$0
lhu $5,2($0)
sub $6,$0,$5
lb $6,0($0)
and $7,$6,$3
lb $7,1($0)
or $8,$2,$7
lbu $8,2($0)
xor $9,$8,$1
lbu $9,3($0)
nor $10,$1,$9
lbu $11,3($0)
slt $12,$11,$9
lhu $13,0($0)
sltu $14,$12,$13
ori $1,$0,300
add $2,$1,$1
slt $3,$1,$2
sltu $4,$3,$0
ori $5,$0,-80
slt $6,$5,$0
ori $7,$0,-100
sltu $8,$7,$5
slt $8,$7,$5
or $9,$7,$6
xor $10,$9,$9
nor $11,$10,$9
and $12,$11,$1
sll $13,$7,5
or $14,$13,$0
srl $15,$7,5
or $16,$0,$15
sra $17,$5,5
or $18,$17,$0
ori $19,$0,7
sllv $20,$5,$19
or $21,$20,$0
srlv $22,$5,$19
or $23,$22,$19
srav $24,$5,$19
or $25,$24,$0
jal next1
nop
mult1:ori $1,$0,100
ori $2,$0,-100
mult $1,$2
mflo $3
add $3,$3,$5
jr $5
next1:addu $31,$31,$0
sltu $30,$31,$0
jalr $5,$31
nop
end1:
ori $1,$0,-100
lui $2,64
add $1,$2,$1
sw $1,0($0)
lw $2,0($0)
addi $3,$2,20
lh $3,0($0)
addiu $4,$3,-20
lhu $4,2($0)
ori $5,$4,200
lb $5,0($0)
xori $6,$5,74
lbu $6,0($0)
slti $7,$6,-20
lbu $7,0($0)
sltiu $8,$7,-20
lb $8,0($0)
slti $9,$8,0
lb $9,0($0)
sltiu $10,$9,0
lui $1,0xffff
addi $1,$1,1000
addiu $2,$1,0
andi $3,$2,0xffff
ori $4,$3,0
xori $5,$4,0xf0f0
ori $6,$0,-50
slti $7,$6,0
ori $6,$0,-90
sltiu $8,$6,0
addu $1,$1,$8
ori $1,$1,0
lw $9,0($0)
nop
slti $9,$9,0
ori $10,$0,-98
sll $11,$10,7
ori $12,$11,0
srl $13,$10,5
ori $14,$13,0
sra $15,$10,3
ori $16,$15,0
ori $17,$0,4
sllv $18,$10,$17
ori $18,$18,0
srlv $19,$10,$17
ori $19,$19,0
srav $20,$10,$17
ori $20,$20,0
jal next2
nop
mult2:ori $21,$0,100
ori $22,$0,-23
divu $21,$22
addi $21,$21,1
mflo $23
subi $23,$23,1
mfhi $24
slti $25,$24,0
jr $5
nop
next2:addiu $31,$31,0
jalr $5,$31
nop
end2:
ori $1,$0,4
sw $1,0($0)
ori $1,$0,100
sw $1,4($0)
lw $2,0($0)
lw $3,0($2)
lh $4,0($0)
lw $5,0($4)
lhu $6,0($0)
lw $7,0($6)
lb $8,0($0)
lw $9,0($8)
lbu $10,0($0)
lw $11,0($10)
ori $1,$0,4
addu $2,$1,$0
lw $3,0($2)
addi $3,$0,4
lw $4,0($3)
ori $5,$0,1
sll $5,$5,2
lw $6,0($5)
mult3:jal next3
nop
ori $1,$0,4
ori $2,$0,1
multu $1,$2
mflo $3
lw $4,0($3)
jr $5
nop
next3:jalr $5,$31
nop
end3:
ori $1,$0,4
sw $1,0($0)
ori $1,$0,0x5678
lui $2,0x1234
addu $1,$1,$2
sw $1,4($0)
lw $2,0($0)
sw $1,0($2)
lh $3,0($0)
sh $1,0($3)
lhu $4,0($0)
sh $1,2($4)
lb $5,0($0)
sb $1,0($5)
lb $6,0($0)
sb $1,1($6)
li $30,0x12345678
ori $1,$0,4
addu $2,$0,$1
sw $30,0($2)
addu $30,$30,$1
sh $30,2($0)
li $30,0x12345678
sw $30,4($0)
addi $4,$0,5
sb $30,0($4)
ori $5,$0,1
sll $5,$5,2
sw $30,4($5)
sra $29,$30,2
sw $29,8($5)
mult4:jal next4
nop
sw $5,0($0)
ori $1,$0,8
ori $2,$0,2
div $1,$2
mflo $3
sw $31,0($3)
ori $7,$0,29
ori $9,$0,30
mult $7,$9
mfhi $4
sw $4,4($3)
jr $5
nop
next4:
sw $31,0($0)
jalr $5,$31
nop
end4:
ori $1,$0,-50
sw $1,0($0)
lw $2,0($0)
sll $3,$2,20
lh $3,0($0)
srl $4,$3,5
lb $4,0($0)
sra $5,$4,5
ori $1,$0,50
sw $1,4($0)
lw $5,4($0)
sra $5,$5,4
ori $1,$0,-50
sll $2,$1,6
addiu $1,$1,0xffff
srl $1,$1,7
lui $1,0xffff
sra $1,$1,9
addiu $1,$1,200
sll $1,$1,5
ori $1,$1,1
sll $1,$1,31
sra $1,$1,20
srl $1,$1,9
jal next5
nop
mult5:
ori $1,$0,0xffff
lui $2,0xffff
mult $1,$2
mfhi $3
sll $3,$3,4
mflo $4
sra $4,$4,7
multu $1,$2
mfhi $3
srl $3,$3,5
mflo $4
sra $4,$4,6
mthi $1
mtlo $2
mfhi $1
sll $1,$1,20
mflo $2
sra $2,$2,10
jr $5
nop
next5:sll $29,$31,16
sra $28,$29,7
srl $27,$28,9
jalr $5,$31
nop
end5:
ori $1,$0,1
addiu $2,$0,20
for1:beq $1,$2,endfor1
sw $1,0($0)
addiu $1,$1,1
j for1
nop
endfor1:
ori $1,$0,3
addiu $2,$0,3
for2:bne $1,$2,endfor2
sb $2,4($2)
addiu $1,$1,1
mult $2,$2
mflo $2
j for2
nop
endfor2:
ori $2,$0,10
subu $3,$2,$0
for3:blez $3,endfor3
sw $3,0($0)
addiu $2,$2,-1
subu $3,$2,$0
j for3
nop
endfor3:
ori $2,$0,11
subu $3,$0,$2
for4:bgtz $3,endfor4
sw $3,8($0)
addiu $2,$2,-1
subu $3,$0,$2
j for4
nop
endfor4:
ori $2,$0,10
subu $3,$2,$0
for5:bltz $3,endfor5
sw $3,12($0)
addiu $2,$2,-1
subu $3,$2,$0
j for5
nop
endfor5:
ori $2,$0,11
subu $3,$0,$2
for6:bgez $3,endfor6
sw $3,0($0)
addiu $2,$2,1
subu $3,$2,$0
j for6
nop
endfor6:
ori $2,$0,11
subu $3,$0,$2
nop
endfor7:
ori $2,$1,-100
lui $3,123
mult $2,$3
mfhi $4
mflo $5
multu $2,$3
mfhi $4
mflo $5
div $2,$3
mfhi $4
mflo $5
divu $2,$3
mfhi $4
mflo $5
addi $4,$4,1
mthi $4
mfhi $5
ori $1,$0,0x1234
sw $1,0($0)
lw $2,0($0)
