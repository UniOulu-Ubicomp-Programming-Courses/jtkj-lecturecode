.pos 0
    irmovq $10,%rax    # silmukkamuuttuja
    irmovq $1,%r8      # Vakio 1 
loop:
    subq %r8,%rax      # %rax = %rax - 1
    jne loop            # hyppy takaisin, jos %rax > 0 (ZF=0)
    halt 