#include <stdio.h>
#include <inttypes.h> // Johdetut muuttujatyypit täältä

int main() {
   uint8_t a = 0x42;
   uint8_t *address_a = &a; 
   uint8_t b = *address_a;
   
   printf("Value of the variable a: %#x\n",a);
   printf("Value of the variable b: %#x\n\n",b);
   
   a = 0x15;
   printf("Value of the variable a: %#x\n",a);
   printf("Value of the variable b: %#x\n\n",b);
   
   *address_a = 0x32;
   printf("Value of the variable a: %#x\n",a);
   printf("Value of the variable b: %#x\n\n",b);
   
   b = 0x28;
   printf("Value of the variable a: %#x\n",a);
   printf("Value of the variable b: %#x\n\n",b);
   
   *address_a = b;
   printf("Value of the variable a: %#x\n",a);
   printf("Value of the variable b: %#x\n\n",b);
    
 
   return 0;
}

