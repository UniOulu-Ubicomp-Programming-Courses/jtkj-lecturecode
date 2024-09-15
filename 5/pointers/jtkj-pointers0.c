#include <stdio.h>
#include <stdint.h>
int main() {
	int8_t x = 54;
	printf("x:n arvo on %d ja muistiosoite %p\n",x,&x);
	printf("The value of x is %d and its memory address %p",x,&x);	
}
