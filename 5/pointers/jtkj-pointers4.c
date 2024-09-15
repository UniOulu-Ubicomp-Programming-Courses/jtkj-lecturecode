#include <stdio.h>

int main() {
   char merkkijono[] = "XYZ";	
   char *tapa_1 = &merkkijono[0]; // Initialization method 1 / Alustustapa 1
   char *tapa_2 = merkkijono;     // Initialization method 2 / Alustustapa 2
   //char *tapa_3 = &merkkijono;  // This is wrong / Tämä on väärin: char*[4] is not compatible with char*

   // Print the string / Tulostetaan merkkijono	
   printf("%s\n", merkkijono);
   printf("%s\n", tapa_1);
   printf("%s\n", tapa_2);
   
	
   return 0;
}

