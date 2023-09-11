xorq %rax,%rax
jne target         # Default: jumps always happen
irmovq $1,%rax
halt
target:
    irmovq $2,%rdx
    irmovq $3,%rbx
    ret