#include <stdio.h>

// extern int a[];
extern int *a;

int main()
{
    printf("&a = %p\n", &a);
    printf("a = %p\n", a);
    printf("a[0] = %d\n", a[0]);

    return 0;
}

// extern int a[];
// &a = 0x601040
// a = 0x601040
// a[0] = 1


// extern int *a;
// &a = 0x601040
// a = 0x200000001
// 段错误 (核心已转储)
