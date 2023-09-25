#include <stdio.h>

int main() {
   char merkkijono[] = "ABCD";	
   char *ptr = merkkijono;

   // tulostus merkki kerrallaan silmukassa.
   // Printing one character at a time in a loop
   for (ptr = merkkijono; *ptr != 0; ptr++) {
      printf("%c",*ptr);
   }

   return 0;
}