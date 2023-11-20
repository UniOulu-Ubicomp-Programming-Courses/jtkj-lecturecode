.pos 0               
   irmovq $4,%rax            # Immediate address: Move value to register %rax = 4 
   rrmovq %rax,%rcx          # Register address: Copy value from one register to another 	                    #%rcx = %rax
   rmmovq %rax,26(%rcx)      # Indirect address: Store the value in %rax 
                             # to the memory address stored in %rcx adding 26.
   mrmovq 26(%rcx), %rdx     # Indirect address: Bring the value stored in memory 
	                         # position %rcx adding 26 to %rdx
   
halt 