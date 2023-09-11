.pos 0                
   irmovq $10,%rax     # a = 10
   irmovq $10,%rcx     # Standard reference value 10 
   subq %rax,%rcx      # "comparison"operation
   cmove %rax,%rbx     # if ZF=1, content in %rbx == %rax, hence b == a
   halt 