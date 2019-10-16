lui $1, 0x1294
ori $1, $1, 0x1d45
lui $2, 0xf192
ori $2, $2, 0xa912
mult $1, $2
mfhi $1
mflo $2
multu $1, $2
mfhi $2
mflo $1
div $1, $2
mfhi $1
mflo $2
divu $1, $2
mfhi $2
div $1, $2
mflo $2
divu $2, $1
mfhi $2
mflo $1
mthi $1
mtlo $2
mfhi $3
mflo $4
