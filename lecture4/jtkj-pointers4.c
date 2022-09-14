#include <stdio.h>

int main() {
   char merkkijono[] = "XYZ";	
   char *tapa_1 = &merkkijono[0]; // alustustapa 1
   char *tapa_2 = &merkkijono;    // alustustapa 2
   char *tapa_3 = merkkijono;     // alustustapa 3

   // Tulostetaan merkkijono	
   printf("%s\n", merkkijono);
   printf("%s\n", tapa_1);
   printf("%s\n", tapa_2);
   printf("%s\n", tapa_3);
	
   return 0;
}
