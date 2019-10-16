ori $2, $0, 1
j jump1
ori $3, $0, 2
ori $4, $0, 3
jump1:
jal jump2
ori $4, $0, 3
ori $5, $0, 4
ori $1, $0, 0x303c
sw $1, 0($0)       # foward w->m
lw $1, 0($0)
jalr $10, $1       # stall tuse=0, tnew=2
jump2:
add $10, $10, 4
ori $6, $0, 5
add $7, $0, $31
jr $7
ori $7, $0, 6
