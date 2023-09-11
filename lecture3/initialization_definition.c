#include <stdio.h>

// Global variable declaration without definition
extern int declaredVar;

// Global variable declaration and definition without initialization
int definedVar;

// Global variable definition with initialization
int initializedVar = 100;

// Function prototype (declaration without definition)
void displayValues(void);

int main() {
    // Local variable definition with initialization
    int localVar = 50;

    // Assigning values to previously declared/defined variables
    declaredVar = 20;
    definedVar = 30;

    displayValues();

    return 0;
}

// Function definition
void displayValues(void) {
    printf("declaredVar: %d\n", declaredVar);       // Expected output: 20
    printf("definedVar: %d\n", definedVar);         // Expected output: 30
    printf("initializedVar: %d\n", initializedVar); // Expected output: 100
}

