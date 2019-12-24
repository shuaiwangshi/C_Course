#include <stdio.h>

const int g_ci = 100;

int main()
{
    int *p = (int *)&g_ci;

    // g_ci = 10; // compile error: assignment of read-only variable ‘g_ci’

    printf("g_ci = %d\n", g_ci);

    *p = 10;    // 通过指针隐式修改

    printf("g_ci = %d\n", g_ci);

    return 0;
}