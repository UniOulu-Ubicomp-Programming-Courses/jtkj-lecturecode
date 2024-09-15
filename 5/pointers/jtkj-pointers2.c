#include <stdio.h>
#include <inttypes.h> // Johdetut muuttujatyypit täältä

int main() {
   uint8_t a = 0x42;
   uint8_t *address_a = &a; 
   
   printf("The value of the variable a: %x\n",a);
   printf("The variable address_a points to the value %x\n",*address_a);
   // Muutetaan a:n arvoa sijoituksella
   a = 0x56;
   printf("The variable address_a points to the value %x\n",*address_a);
   // Muutetaan a:n arvoa osoittimen kautta sijoituksella
   *address_a = 0x78;
   printf("The value of the variable a %x\n",a);
   
   return 0;
}