#include <stdio.h>

#define STACKSIZE 100

int sp = 0; //Stack pointer, position of the stack.
double val[STACKSIZE]; //Stack

void push (double f) {
	char error[] = "Stack full, can't push\n";
	if (sp < STACKSIZE){
		val[sp++] = f;
		printf("Added %f to the stack\n", f);
	}
	else 
		printf("%s",error);
}

double pop (void) {
	char error[] = "Stack empty, can't pop\n";
	float f;
	if (sp > 0){
		f = val[--sp];
		printf("Extracted %f from the stack\n", f);
	}
	else 
		printf("%s",error);
	return f;	
}

void print (void){
	printf("Stack content: [");
	for (int i=0; i<=sp; i++){
		printf("%.2f,",val[i]);
	}
	printf("]\n");
}

int main () {
    push (24.2);
    push (20);
    push (-3.4);
    print();
}