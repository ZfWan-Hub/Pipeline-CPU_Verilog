.data
symbol: .word 0:7
array: .word 0:7
space: .asciiz" "
enter: .asciiz"\n"
.text
li $v0,5
syscall
move $s0,$v0  #s0=n
li $a0,0  #a0=index
jal Fullarray

li $v0,10
syscall

Fullarray:
subi $sp,$sp,4
sw $a0,0($sp)
subi $sp,$sp,4
sw $ra,0($sp)



slt $t0,$a0,$s0
bne $t0,$0,work
li $t2,0 #t2=i
loop1:
sll $t3,$t2,2
lw $a0,array($t3)
li $v0,1
syscall
la $a0,space
li $v0,4
syscall

addi $t2,$t2,1
bne $t2,$s0,loop1
la $a0,enter
li $v0,4
syscall

lw $ra,0($sp)
addi $sp,$sp,4
lw $a0,0($sp)
addi $sp,$sp,4
jr $ra

work:
li $t1,0  #t1=i
loop2:
sll $t2,$t1,2
lw $t2,symbol($t2)
bne $t2,$0,else
addi $t3,$t1,1  #t3=i+1
sll $t4,$a0,2
sw $t3,array($t4)
li $t4,1
sll $t5,$t1,2
sw $t4,symbol($t5)


addi $a0,$a0,1
subi $sp,$sp,4
sw $t1,0($sp)

jal Fullarray
lw $t1,0($sp)
addi $sp,$sp,4
subi $a0,$a0,1

sll $t5,$t1,2
sw $0,symbol($t5)

else:
addi $t1,$t1,1
bne $t1,$s0,loop2
lw $ra,0($sp)
addi $sp,$sp,4
lw $a0,0($sp)
addi $sp,$sp,4
jr $ra
