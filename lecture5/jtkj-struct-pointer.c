#include <stdio.h>
#include <inttypes.h>

struct point {
	uint16_t x;
	uint16_t y;
} piste = { 160, 100 };

int main() {

   struct point *osoitin_piste = &piste;	
	
   printf("x=%d y=%d\n", piste.x, piste.y);
   printf("x=%d y=%d\n", osoitin_piste->x, osoitin_piste->y);	
	
   // sijoitus jäseneen a.y osoittimen kautta
   osoitin_piste->y=103; 
   printf("x=%d y=%d\n", piste.x, piste.y);	
    
   return 0;
}