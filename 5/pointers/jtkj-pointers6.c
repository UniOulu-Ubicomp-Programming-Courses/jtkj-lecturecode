#include <stdio.h>
#include <inttypes.h>

int main() {
   uint16_t taulukko[] = { 0x1234, 0x5678, 0x9ABC, 0x00 };
   uint16_t *ptr = taulukko; 

   for (ptr = taulukko; *ptr != 0; ptr++) {
      printf("%x ",*ptr);
   }
        
   return 0;
}