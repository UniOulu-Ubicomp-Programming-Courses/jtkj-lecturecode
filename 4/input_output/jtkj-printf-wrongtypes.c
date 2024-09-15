#include <stdio.h>

int main (){
double num= 4.290903;
    printf("Using the wrong placeholder type %d: using %%d for writing a float\n", num);
    printf("Using the wrong placeholder type %c: using %%c for writing a float\n", num);
    printf("Using a valid placeholder type %g: using %%g for writing a float\n", num);
    printf("Using the right placeholder type %f: using %%f for writing a float\n", num);

long num2 = 2345561212;
    printf("Using the wrong placeholder type %d: using %%d for writing a long int\n", num2);
    printf("Using a valid placeholder type %ld: using %%ld for writing a long int\n", num2);
}