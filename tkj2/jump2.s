.pos 0  
   irmovq $9,%rax      # a = 9
   irmovq $10,%r8      # Reference value 10 
   subq %r8,%rax       # if (a > 10)
   jg greater          # if condition meets, jump to greater "greater"
   irmovq $0,%rbx      # change b = 0
   jmp skip            # skip "greater"
greater:
   irmovq $1,%rbx      # b = 1
skip:                  # The program continues 
  halt  