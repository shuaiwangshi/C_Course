#include <stdio.h>

int main()
{
    float f = 1.25;

    unsigned int *p = (unsigned int *)&f;

    printf("0x%08x\n", *p);



    return 0;
}