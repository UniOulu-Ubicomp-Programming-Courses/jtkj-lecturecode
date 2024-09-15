#include <stdio.h>

void appendStrings(char str1[], const char str2[]) {
  //Code here
}

int main() {
    char str1[100] = "Hello, ";
    char str2[] = "World!";
    appendStrings(str1, str2);
    printf("%s\n", str1);  // Prints: Hello, World!
    return 0;
}
