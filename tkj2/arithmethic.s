.pos 0                
   irmovq $4,%rax      # 1. operandi luku 4
   irmovq $3,%rbx      # 2. operandi luku 3
   addq   %rbx,%rax    # %rax = %rax + %rbx = 4 + 3 = 7

   irmovq $7, %rbx     # 2. operandi luku 7
   subq   %rbx,%rax    # %rax = %rax - %rbx = 7 - 7 = 0
                       # Now Z flag is set
   halt    