.data
juzhen1: .word 0:64
juzhen2: .word 0:64
juzhen3: .word 0:64
space: .asciiz" "
enter: .asciiz"\n"
.text
li $v0,5
syscall
move $s0,$v0  #s0="n"

li $t0,0#t0=current hang
li $t1,0#t1=current lie
loop1:
mult $t0,$s0
mflo $t2
add $t2,$t2,$t1
sll $t2,$t2,2


li $v0,5
syscall
move $t3,$v0  #t3=read_num

sw $t3,juzhen1($t2)

addi $t1,$t1,1
bne $t1,$s0,loop1

addi $t0,$t0,1
li $t1,0
bne $t0,$s0,loop1
########
li $t0,0#t0=current hang
li $t1,0#t1=current lie
loop2:
mult $t0,$s0
mflo $t2
add $t2,$t2,$t1
sll $t2,$t2,2


li $v0,5
syscall
move $t3,$v0  #t3=read_num

sw $t3,juzhen2($t2)

addi $t1,$t1,1
bne $t1,$s0,loop2

addi $t0,$t0,1
li $t1,0
bne $t0,$s0,loop2
#####
li $t0,0#t0=current hang
li $t1,0#t1=current lie
loop3:
mult $t0,$s0
mflo $t2
add $t2,$t2,$t1
sll $t2,$t2,2

li $t3,0   #t3=i
li $t4,0  ##t4=wirte_num
loop4:
mult $s0,$t0
mflo $t5
add $t5,$t5,$t3
sll $t5,$t5,2
lw $t6,juzhen1($t5)#t6=a[m][i]

mult $s0,$t3
mflo $t5
add $t5,$t5,$t1
sll $t5,$t5,2
lw $t7,juzhen2($t5) #t7=b[i][n]

mult $t6,$t7
mflo $t8
add $t4,$t4,$t8

addi $t3,$t3,1
bne $t3,$s0,loop4

sw $t4,juzhen3($t2)  

addi $t1,$t1,1
bne $t1,$s0,loop3

addi $t0,$t0,1
li $t1,0
bne $t0,$s0,loop3
#########
li $t0,0#t0=current hang
li $t1,0#t1=current lie
loop5:
mult $t0,$s0
mflo $t2
add $t2,$t2,$t1
sll $t2,$t2,2

lw $t3,juzhen3($t2)##t3=print_num
move $a0,$t3
li $v0,1
syscall
la $a0,space
li $v0,4
syscall

addi $t1,$t1,1
bne $t1,$s0,loop5

la $a0,enter
li $v0,4
syscall

addi $t0,$t0,1
li $t1,0
bne $t0,$s0,loop5

li $v0,10
syscall
