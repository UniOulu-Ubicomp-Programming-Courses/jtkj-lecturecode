#include <stdio.h>
#include <stdint.h>

#define MAX(A,B) ( A > B ? A : B )

int main()
{

    int max = MAX (0x02 | 0x01, 0x05);
    printf("%#x",max);

    return 0;
}