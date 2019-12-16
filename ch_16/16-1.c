#include <stdio.h>

int main()
{
    int i = -1;
    printf("i = 0x%x\n", i);

    i = i >> 10;
    printf("i = 0x%x\n", i);

    return 0;
}