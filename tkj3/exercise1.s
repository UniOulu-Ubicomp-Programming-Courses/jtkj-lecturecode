.pos 0x100
    irmovq $15, %rbx   
    rrmovq %rbx,%rcx   
loop:   
    rmmovq %rcx,-3(%rbx)   
    irmovq %rbx,%rcx       
    jmp loop            
   