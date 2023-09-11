#.pos 0               
   irmovq $4,%rax      # Immediate address: Move value to register %rax = 4 
   rrmovq %rax,%rcx    # Register address: Copy value from one register to another %rcx = %rax
   mrmovq (%rdi), %r10 # Indirect address: Bring the value stored in memory 
					   # position %rdi to the register %r10
   rmmovq %rsi,8(%rdx) # Indirect address: Store the value in %rsi 
                       # to the memory address stored in %rdx adding 8.
#  halt    