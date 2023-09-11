# Program starts at memorey position  0 
.pos 0
# Alustukset
    irmovq stack, %rbp   # Stack initialization
    irmovq stack, %rsp   # Stack counter
# Pääohjelma    
main:   
    irmovq array,%rdi   # Subroutine arguments
    irmovq $4,%rsi      # 
    call sum            # Call the subroutine sum(array, 4)
    halt                # End main programm

# Subroutine sum(long *array, long count)
# start in %rdi
# count in %rsi
sum:    
    irmovq $8,%r8        # Constant 8
    irmovq $1,%r9        # Constant 1
    xorq %rax,%rax       # sum = 0. Check that %rax is 0
    andq %rsi,%rsi       # 
    jmp     test         # Hypätään test-lohkoon
loop:   
    mrmovq (%rdi),%r10   # Array starts (*array)
    addq %r10,%rax       # Add element to the sum
    addq %r8,%rdi        # The address for the next element (array=..)
    subq %r9,%rsi        # Array lenght (count--)
test:   
    jne    loop          # The loop return to the begining of if count != 0
    ret                  # Back to the main program.

# Stack position in memory 
.pos 0x200
stack:

# Array: 4 elements
.pos 0x300
.align 8
array:  
    .quad 0x000d000d000d
    .quad 0x00c000c000c0
    .quad 0x0b000b000b00
    .quad 0xa000a000a000