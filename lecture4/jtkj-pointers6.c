#include <stdio.h>
#include <inttypes.h>

int main() {
   uint16_t taulukko[] = { 0x1234, 0x5678, 0x9ABC };
   uint16_t *ptr = taulukko; 

   for (ptr = taulukko; *ptr != 0; ptr++) {
      printf("%lx ",*ptr);
   }
        
   return 0;
}