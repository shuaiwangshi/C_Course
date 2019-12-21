#include <stdio.h>

int main()
{
    unsigned int i = 0;

    // 当i = 0时，i--变为最大值
    // 前面讲过 MIN_VALUE - 1 ==> MAX_VALUE
    for (i = 9; i >= 0; i--) // i >= 0一直成立
    {
        printf("i = %u\n", i);
    }

    return 0;
} 