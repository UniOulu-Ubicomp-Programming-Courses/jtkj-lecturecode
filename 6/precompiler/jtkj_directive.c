#include <stdio.h>

int main() {
#ifdef __unix__
    printf("Compiling for Unix\n");
#elif defined _WIN
    printf("Compiling for Windows\n");
#else
    #error system not supported
#endif
    return 0;
}