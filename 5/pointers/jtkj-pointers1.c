#include <stdio.h>
#include <inttypes.h> // Johdetut muuttujatyypit täältä

int main() {
   uint8_t a = 0x42;
   uint8_t *address_a = &a; 
   
   printf("Addres of variable a: %p\n",&a);
   printf("Variable size: %ld\n",sizeof(a));
    
   printf("Address of the memory location variable: %p\n",&address_a);
   printf("Memory location variable size: %ld\n",sizeof(address_a));
   
   return 0;
}