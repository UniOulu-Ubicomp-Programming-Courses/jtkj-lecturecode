#include <stdio.h>
int main()
{
    char a = 0b00001111;
    char b = 0b10101010; 
	signed char result = a | b;
    printf ("%d", result);
    return 0;
}