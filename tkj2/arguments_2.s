.pos 0
   irmovq pino,%rsp      # stack address
   irmovq pino,%rbp      # stack starting points
   irmovq $1,%rax        # 3 arguments (10,20 ja 30) goes to stack
   pushq %rax
   irmovq $2,%rax
   pushq %rax
   irmovq $3,%rax
   pushq %rax
   call addition         # Call to subroutine
   popq %rax             # Empty the stack
   popq %rax             # Be sure that everything is removed
   popq %rax
   halt                  # Stop program 
                         # Without stopping the program,
                         # it would continue to the Subroutine!!!

.pos 0x100
addition:                # Subroutine starts here
   mrmovq 8(%rsp),%rax
   addq %rax,%rbx
   mrmovq 16(%rsp),%rax
   addq %rax,%rbx
   mrmovq 24(%rsp),%rax
   addq %rax,%rbx
   ret                   # Back to main program.
   
.pos 0x400
pino:                  # pinon alkuosoite   