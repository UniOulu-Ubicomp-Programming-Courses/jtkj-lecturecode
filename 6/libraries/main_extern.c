// main.c
#include "pasta.h"

int main(void) {
   //Now I can use the variable, since it is extern in the library, and it is defined in the pasta.c
   _portion_size = 5;
   uint8_t portions = _portion_size;
   printf("Portion size is: %d\n", portions);

   return 0;
}