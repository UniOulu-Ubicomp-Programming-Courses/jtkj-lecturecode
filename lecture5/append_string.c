#include <stdio.h>

void appendStrings(char *str1, const char *str2) {
    while (*str1)  // Go to the end of str1
        str1++;
    while (*str2)  // Copy str2 at the end of str1
        *str1++ = *str2++;
    *str1 = '\0';  // Null terminate the resulting string
}

int main() {
    char str1[100] = "Hello, ";
    char str2[] = "World!";
    appendStrings(str1, str2);
    printf("%s\n", str1);  // Prints: Hello, World!
    return 0;
}
