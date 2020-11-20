#include <stdlib.h>
#include <stdio.h>

void main()
{
int fib[16] = {0, 1}, i;
    for (i=0; i<16; i++)
        {
        fib[i+2] = fib[i] + fib[i+1];
        printf("%d, ", fib[i]);
        }
    return 0;
}
