#include <stdio.h>
#include <stdint.h>   // For uint8_t and uint16_t

// Make variables global
int a = 10;              
long int b = 100000;      
float c = 3.14;           
char d = 'A';             
uint8_t e = 255;          
uint16_t f = 65535;       
unsigned int g = 1000;    

int main(void) {
    printf("Size of int: %zu bytes\n", sizeof(a));
    printf("Size of long int: %zu bytes\n", sizeof(b));
    printf("Size of float: %zu bytes\n", sizeof(c));
    printf("Size of char: %zu bytes\n", sizeof(d));
    printf("Size of uint8_t: %zu bytes\n", sizeof(e));
    printf("Size of uint16_t: %zu bytes\n", sizeof(f));
    printf("Size of unsigned int: %zu bytes\n", sizeof(g));

    return 0;
}
