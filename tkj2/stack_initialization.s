.pos 0
    irmovq stack,%rbp # stack initial position 
    irmovq stack,%rsp # stack pointer 
main:
    irmovq $1,%rax   # value to store in the stack
    pushq %rax       # register value to stack
    irmovq $2,%rax
    pushq %rax
    irmovq $3,%rax
    pushq %rax       
    popq %rax        # empty the stack
    popq %rax
    popq %rax        # I added 3 values. I need to remove all of them.
    halt
    
.pos 0x400
stack: