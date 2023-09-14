#include <stdio.h>

void change(int8_t local_a, int8_t local_b); // prototyyppi

int main() {
   int8_t a = 14;
   int8_t b = 68;
   printf("Before: a=%d ja b=%d\n", a, b);
   change(a, b);
   printf("After: a=%d ja b=%d\n", a, b);
}

void change(int8_t local_a, int8_t local_b) {
   int8_t temp = local_a;
   local_a = local_b;
   local_b = temp;
}