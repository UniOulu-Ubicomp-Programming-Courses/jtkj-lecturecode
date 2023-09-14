#include <stdio.h>

int main() {
   char merkkijono[] = "ABCD";	
   char *ptr = merkkijono;

   // tulostus merkki kerrallaan silmukassa..
   for (ptr = merkkijono; *ptr != 0; ptr++) {
      printf("%c",*ptr);
   }

   return 0;
}