main: 
    call function 
    irmovq $10,%rdx 
    halt 
function: 
    irmovq $3,%rcx 
    ret