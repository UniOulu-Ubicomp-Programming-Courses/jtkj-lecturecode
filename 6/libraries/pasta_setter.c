// Internal library variables
uint8_t _water_amount = 0;
uint8_t _cooking_time = 0;
static uint8_t _portion_size = 0; // We make sure that other files cannot modify this variable. 

// Functions
void set_portion_size(uint8_t portions) {
   _portion_size = portions;
}

uint8_t get_portion_size(void) {
   return _portion_size;
}

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