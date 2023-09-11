.pos 0
   irmovq $100,%rdi    # 1. argument
   irmovq $200,%rsi    # 2. argument
   call yhteenlasku    # subroutine call
   halt                # program stops

.pos 0x100
yhteenlasku:           # subroutine functionality
   addq %rsi,%rdi      # Now in %rdi we have the output. 
   ret  