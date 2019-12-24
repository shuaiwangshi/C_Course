#include <stdio.h>

int main()
{
    const static int si = 100;

    int *p = (int *)&si;

    *p = 1;

    printf("si = %d\n", si);
    return 0;
}