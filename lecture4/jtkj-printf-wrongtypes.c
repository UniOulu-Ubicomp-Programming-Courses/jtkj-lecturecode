#include <stdio.h>

int main (){
double num= 4.290903;
    printf("Using the wrong placeholder type %d: using %%d for writing a float\n", num);
    printf("Using a valid placeholder type %g: using %%g for writing a float\n", num);
    printf("Using the right placeholder type %f: using %%f for writing a float\n", num);
}
