.pos 0
   irmovq stack,%rsp    # stack-current address
   irmovq stack,%rbp    # stack starting address
   call addition        # call to subroutine
   halt                 # Stop program

.pos 0x100
addition:               # Subroutine starts here
   addq %rsi,%rdi
   ret                  # Return from subroutine
   
.pos 0x400
stack:                  # Stack initial address