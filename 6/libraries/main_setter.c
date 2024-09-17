// main.c
#include "pasta.h"

int main(void) {
   // Set and get the global variable
   set_portion_size(5);
   uint8_t portions = get_portion_size();
   printf("Portion size is: %d\n", portions);

   return 0;
}