#define STACKSIZE 100

int sp = 0; //Stack pointer, position of the stack.
double val[STACKSIZE]; //Stack

void push (double f) {
	char error[] = "Stack full, can't push\n";
	if (sp < STACKSIZE)
		val[sp++] = f;
	else 
		printf("%s",error);
}

double pop (void) {
	char error[] = "Stack empty, can't pop\n";
	float f;
	if (sp > 0)
		f = val[--sp] ;
	else 
		printf("%s",error);
	return f;	
}

int main () {
	
}

