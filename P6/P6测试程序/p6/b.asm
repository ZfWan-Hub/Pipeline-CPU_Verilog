lui $1, 0xffff
ori $1, $1, 0xffff    # foward m->e
bne $1, $0, jump1     # stall tuse=0, tnew=1
jump0:
addi $1, $1, 1
addi $2, $2, 2
jump1:
blez $1, jump0
ori $3, $0, 2
addi $1, $1, -3
jump2:
addi $1, $1, 1
bltz $1, jump2        # stall tuse=0, tnew=1
addi $4, $4, 3
addi $1, $1, 3
jump3:
addi $1, $1, -1       # stall tuse=0, tnew=1
bgtz $1, jump3
addi $5, $5, 4
addi $1, $1, 3
jump4:
addi $1, $1, -1
bgez $1, jump4
addi $6, $6, 5

