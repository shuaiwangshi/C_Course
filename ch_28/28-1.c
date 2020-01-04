#include <stdio.h>

int main()
{
    int a[5] = {0};
    int *p = NULL;

    printf("a = 0x%lX\n", (unsigned long)a);    // a = 0x7FFF043D43A0
    printf("a + 1 = 0x%lX\n", (unsigned long)(a + 1));  // a + 1 = 0x7FFF043D43A4

    printf("p = 0x%lX\n", (unsigned long)p);    // p = 0x0
    printf("p + 1 = 0x%lX\n", (unsigned long)(p + 1));  // p + 1 = 0x4

    return 0;
}