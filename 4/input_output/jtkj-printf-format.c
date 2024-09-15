#include <stdio.h>

int main (){
	double a = 423.2929; 
	int b = 22; 
	char c []  = "Hello";
	
	printf("Trying different lengths %.1f\n",a);
	printf("Trying different lengths %.2g\n",a);
	printf("Trying different lengths %d\n",b);
	printf("Trying different lengths %+.3s\n",c);
	
}