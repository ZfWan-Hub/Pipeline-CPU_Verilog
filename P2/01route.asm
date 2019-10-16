.data
array: .word 0:64
symbol: .word 0:64
.text
li $v0,5
syscall
move $s0,$v0  #s0=m
li $v0,5
syscall
move $s1,$v0  #s1=n

li $t0,0  #t0=i
li $t1,0  #t1=j
loop1:
li $v0,5
syscall
move $t2,$v0  #t2=0 or 1

mult $t0,$s1
mflo $t3
add $t3,$t3,$t1
sll $t3,$t3,2

sw $t2,array($t3)
addi $t1,$t1,1
bne $t1,$s1,loop1

addi $t0,$t0,1
li $t1,0
bne $t0,$s0,loop1
#####initial   array

li $v0,5
syscall
move $a0,$v0
subi $a0,$a0,1  #a0=origin  i
li $v0,5
syscall
move $a1,$v0  
subi $a1,$a1,1#a1=origin  j
li $v0,5
syscall
move $s2,$v0  
subi $s2,$s2,1#s2=des  i
li $v0,5
syscall
move $s3,$v0  
subi $s3,$s3,1#s3=des  j
li $s4,0  #s4=sum

jal route

move $a0,$s4
li $v0,1
syscall
li $v0,10
syscall

route:
subi $sp,$sp,4
sw $ra,0($sp)
subi $sp,$sp,4
sw $a0,0($sp)
subi $sp,$sp,4
sw $a1,0($sp)

mult $a0,$s1
mflo $t0
add $t0,$t0,$a1
sll $t0,$t0,2
li $t1,1
sw $t1,symbol($t0)

if1:
bne $a0,$s2,if2
bne $a1,$s3,if2

addi $s4,$s4,1
mult $a0,$s1
mflo $t0
add $t0,$t0,$a1
sll $t0,$t0,2
sw $0,symbol($t0)

lw $a1,0($sp)
addi $sp,$sp,4
lw $a0,0($sp)
addi $sp,$sp,4
lw $ra,0($sp)
addi $sp,$sp,4
jr $ra

if2:
addi $t0,$a1,-1  #t0=j-1
slt $t1,$t0,$0
bne $t1,$0,if3

mult $a0,$s1
mflo $t1
add $t1,$t1,$t0
sll $t1,$t1,2
lw $t2,array($t1)
bne  $t2,$0,if3

lw $t2,symbol($t1)
bne  $t2,$0,if3

subi $a1,$a1,1
jal route
addi $a1,$a1,1

if3:
addi $t0,$a1,1  #t0=j+1
slt $t1,$t0,$s1
beq $t1,$0,if4

mult $a0,$s1
mflo $t1
add $t1,$t1,$t0
sll $t1,$t1,2
lw $t2,array($t1)
bne  $t2,$0,if4

lw $t2,symbol($t1)
bne  $t2,$0,if4

addi $a1,$a1,1
jal route
subi $a1,$a1,1

if4:
addi $t0,$a0,-1  #t0=i-1
slt $t1,$t0,$0
bne $t1,$0,if5

mult $t0,$s1
mflo $t1
add $t1,$t1,$a1
sll $t1,$t1,2
lw $t2,array($t1)
bne  $t2,$0,if5

lw $t2,symbol($t1)
bne  $t2,$0,if5

subi $a0,$a0,1
jal route
addi $a0,$a0,1

if5:
addi $t0,$a0,1  #t0=i+1
slt $t1,$t0,$s0
beq $t1,$0,end

mult $t0,$s1
mflo $t1
add $t1,$t1,$a1
sll $t1,$t1,2
lw $t2,array($t1)
bne  $t2,$0,end

lw $t2,symbol($t1)
bne  $t2,$0,end

addi $a0,$a0,1
jal route
subi $a0,$a0,1

end:
mult $a0,$s1
mflo $t0
add $t0,$t0,$a1
sll $t0,$t0,2
sw $0,symbol($t0)

lw $a1,0($sp)
addi $sp,$sp,4
lw $a0,0($sp)
addi $sp,$sp,4
lw $ra,0($sp)
addi $sp,$sp,4
jr $ra