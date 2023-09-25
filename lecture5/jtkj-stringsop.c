#include <stdio.h>
#include <string.h>

int main () {
    char str[] = "1234567890,temperature,27,C"; 
    const char sep[] = ",";  // Separator is comma / Erotin on pilkku
    char *token; // Token pointer / Paikkamerkki-osoitin
   
    // Extract the first part of the message / Erota viestistä ensimmäinen osa
    token = strtok(str, sep);
   
    // In a loop, extract the remaining parts / Erota silmukassa loput osat
    while( token != NULL ) {
        printf("%s\n",token);
        // Call the function again, continue from the token / Kutsu funktiota uudelleen, jatketaan paikkamerkistä
        token = strtok(NULL, sep);
    }
   
    return(0);
}