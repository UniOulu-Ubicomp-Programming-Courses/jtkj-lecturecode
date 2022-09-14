#include <stdio.h>
int main()
{
    int c1= 5;
    int c2 = 9; 
	int c3 = 32;
    float fah = 212.0;
    float cent = c1/c2*(fah-c3);
    printf ("%.2f Fahrenheit are %.2f Centigrades",fah, cent);
    return 0;
}