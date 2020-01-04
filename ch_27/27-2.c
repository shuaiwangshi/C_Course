#include <stdio.h>

int main()
{
    int a[5] = {0};

    printf("a = %p\n", a);  // 0x7ffc7425dbb0
    printf("&a = %p\n", &a);    // 0x7ffc7425dbb0
    printf("&a[0] = %p\n", &a[0]);  // 0x7ffc7425dbb0

    return 0;
}