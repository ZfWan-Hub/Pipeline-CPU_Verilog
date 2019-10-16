.data
juzhen1: .word 0:100
juzhen2: .word 0:100

space: .asciiz" "
enter: .asciiz"\n"
.text
li $v0,5
syscall
move $s0,$v0  #s0=m1
li $v0,5
syscall
move $s1,$v0  #s1=n1
li $v0,5
syscall
move $s2,$v0  #s2=m2
li $v0,5
syscall
move $s3,$v0  #s3=n2

li $t0,0#t0=current hang
li $t1,0#t1=current lie
loop1:
mult $t0,$s1
mflo $t2
add $t2,$t2,$t1
sll $t2,$t2,2


li $v0,5
syscall
move $t3,$v0  #t3=read_num

sw $t3,juzhen1($t2)

addi $t1,$t1,1
bne $t1,$s1,loop1

addi $t0,$t0,1
li $t1,0
bne $t0,$s0,loop1
#########
li $t0,0#t0=current hang
li $t1,0#t1=current lie
loop2:
mult $t0,$s3
mflo $t2
add $t2,$t2,$t1
sll $t2,$t2,2


li $v0,5
syscall
move $t3,$v0  #t3=read_num

sw $t3,juzhen2($t2)

addi $t1,$t1,1
bne $t1,$s3,loop2

addi $t0,$t0,1
li $t1,0
bne $t0,$s2,loop2
##########
sub $s4,$s0,$s2
addi $s4,$s4,1  #s4=m1-m2+1
sub $s5,$s1,$s3
addi $s5,$s5,1  #s5=n1-n2+1
li $t0,0   #t0=i
li $t1,0   #t1=j
loop3:
li $t2,0  #t2=m
li $t3,0  #t3=n
li $s6,0
li $s7,0
loop4:
mult $t2,$s3
mflo $t5
add $t5,$t5,$t3
sll $t5,$t5,2
lw $t6,juzhen2($t5)  #t6=b[m][n]

add $t5,$t0,$t2  #t5=i+m
add $t7,$t1,$t3  #t7=j+n
mult $t5,$s1
mflo $t5 
add $t5,$t5,$t7
sll $t5,$t5,2
lw $t7,juzhen1($t5)  #t7=a[i+m][j+n]
### mult_improve
mthi $s6
mtlo $s7
madd $t6,$t7
mfhi $s6  #s6=high 32
mflo $s7  #s7=low  32
#####


addi $t3,$t3,1
bne $t3,$s3,loop4

addi $t2,$t2,1
li $t3,0
bne $t2,$s2,loop4
##t4=new_num
move $a0,$s6
li $v0,35
syscall
move $a0,$s7
li $v0,35
syscall
la $a0,space
li $v0,4
syscall


addi $t1,$t1,1
bne $t1,$s5,loop3

la $a0,enter
li $v0,4
syscall

addi $t0,$t0,1
li $t1,0
bne $t0,$s4,loop3

li $v0,10
syscall
