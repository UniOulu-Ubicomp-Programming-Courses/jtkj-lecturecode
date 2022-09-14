#include <stdint.h>

int main () {
  char str[] = "1234567890,temperature,27,C"; 
  const char sep[] = ",";  // Erotin pilkku
  char *token; // paikkamerkki-osoitin
   
  // Erota viestistä ensimmäinen osa
  token = strtok(str, sep);
   
  // Erota silmukassa loput osat 
  while( token != NULL ) {
    printf("%s\n",token);

    // Funktio uudelleen, jatketaan paikkamerkistä
    token = strtok(NULL, sep);
    }
   
  return(0);
}
