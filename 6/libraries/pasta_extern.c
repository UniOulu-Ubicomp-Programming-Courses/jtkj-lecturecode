// pasta.c
#include "pasta.h"

// Define the global variable (allocate memory and initialize it)
//Other source files can now access this variable through the extern declaration in the header file.
uint8_t _portion_size = 0;

uint8_t add_water(void) {

   _water_amount = _portion_size * 0.2;
}

void set_cooking_time(void) {

   switch(_selected_pasta) {
      case SPAGHETTI:
         _cooking_time = 10;
         break;
      case MACARONI:
         _cooking_time = 8;
         break;
      ...
   }
}