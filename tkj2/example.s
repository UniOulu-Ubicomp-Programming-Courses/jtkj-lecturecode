# Implement the function sum (long * array, long count)
#   Sum the first count elements of the array. Value is stored 
#   in %rax


# Program starts at memory position  0 
.pos 0
# Initialization
    irmovq stack, %rbp   # Stack initialization
    irmovq stack, %rsp   # Stack counter
# Main program    
main:   
    irmovq array,%rdi   # Subroutine argument &array
    irmovq $4,%rsi      # Subroutine argument count
    call sum            # Call the subroutine sum(&array, 4)
    halt                # End main programm

# Subroutine sum(long *array, long count)
# start in %rdi
# count in %rsi
sum:    
    irmovq $8,%r8        # Constant 8. Define the increase for memory.
    irmovq $1,%r9        # Constant 1. Used to decrease the counter
    xorq %rax,%rax       # Put 0 in %rax
    andq %rsi,%rsi       # Check if %rsi is 0
    je sum_end               # If %rsi is 0 return
sum_loop:   
    mrmovq (%rdi),%r10   # Array starts (*array)
    addq %r10,%rax       # Add element to the sum
    addq %r8,%rdi        # The address for the next element (array=..)
    subq %r9,%rsi        # Array lenght (count--)
    jne sum_loop
sum_end:   
    ret                  # Back to the main program.

# Stack position in memory 
.pos 0x200
stack:

# Array: 4 elements
.pos 0x300
.align 8
array:
    .quad 0x00000000000001
    .quad 0x00000000000002
    .quad 0x00000000000003
    .quad 0x00000000000004
#    .quad 0x00000d000d000d
#    .quad 0x0000c000c000c0
#    .quad 0x000b000b000b00
#    .quad 0x00a000a000a000