.data
array:.space 20
.text
li $t0,0
li $v0,5
syscall
move $s0,$v0       #s0=n
loop1:
li $v0,12
syscall
move $s1,$v0    #s1=read_zifu

sb $s1,array($t0)
addi $t0,$t0,1
bne $t0,$s0,loop1

li $t0,0        #t0=i=0
addi $t1,$s0,-1 #t1=j=n-1
loop2:
lb $s1,array($t0)
lb $s2,array($t1)
bne $s1,$s2,print0
addi $t0,$t0,1
subi $t1,$t1,1
slt $t3,$t0,$t1
bne $t3,$0,loop2

print1:
li $a0,1
li $v0,1
syscall
li $v0,10
syscall

print0:
li $a0,0
li $v0,1
syscall
li $v0,10
syscall
