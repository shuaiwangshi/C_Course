#include <stdio.h>

int main()
{
    float f = 0.25;
    unsigned int *p = (unsigned int *)&f;

    printf("f = 0x%08x\n", *p);

    return 0;
}