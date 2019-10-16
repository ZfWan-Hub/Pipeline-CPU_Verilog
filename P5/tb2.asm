addu $28, $0, $0
	subu $21, $0, $28  # forward m->d
	ori $29, $0, 0
	ori $28, $0, 4
case1:
	lui $1, 0xffff
	ori $1, $1, 0x2834   # foward m->e
	sw $1, 0($29)        # foward w->m
	lw $2, 0($0)
	beq $2, $0, case2   # stall tnew=2, tuse=0
	ori $2, $0, 888
	ori $2, $0, 99
	ori $29, $0, 4
	addu $29, $29, $28
case2:
	lui $1, 0x0000
	addu $13, $13, $28
	beq $13, $28, case1 # jump forward
	addu $19, $29, $28
	beq $1, $0, case3   # foward e->d
	lui $1, 0xffff
	ori $1, $1, 0xffff
	addu $29, $29, $28
	j case3
	subu $21, $29, $21  # forward w->d
	lui $4, 0x2934
	ori $4, $4, 0x1294
case3:
	lui $4, 0xffff
	ori $4, $4, 0x85dc
	addu $21, $4, $17
	lui $5, 0xffff
	ori $5, $5, 0x83d3
	addu $0, $4, $5      # write $0
	sw $0, 0($29)
	addu $29, $29, $28
case4:
	lui $24, 0xffff
	ori $24, $24,0x85dc
	lui $25, 0x0000
	subu $21, $21, $24  # forward w->d
	ori $25, $25, 0x3088
	nop
	lui $25, 0xffff
	ori $25, $25, 0x83d3
	subu $26, $25, $24
	ori $25, $26, 13
	beq $26, $26, case5 # foward m->d
	addu $29, $29, $28
case5:
	lui $16,0xffff
	ori $16,$16,0xd9ef
	sw $16, -4($29)
	lw $16, -4($29)
	addu $15, $16, $16 # stall
	addu $21, $16, $16 #forward w->d
	ori $21, $21, 4 #forward m->d
	lui $17,0xffff
	ori $17,$17,0x8dcd
	ori $3, $0, 123
	sw $3, 0($29)
	subu $4, $3, $17     # foward w->e
	beq $3, $0, case6   # foward w->d
	nop
case6:
	lui $26,0xffff
	ori $26,$26,0xf4aa
	jal loop
	addu $21, $31, $21
	ori $0, $26, 555
	subu $28, $17, $26
	j case7
	nop
loop:
	jr $31
	ori $6, $0, 4
loop1:
	jal end
	addu $31, $31, $28
case7:
	beq $0, $0, loop1
	nop
end:
        addu $21, $21, $31
