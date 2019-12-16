#include <stdio.h>

struct SoftArray {
    int len;
    int array[];    // 结构体最后一个元素为柔性数组
};

int main()
{
    struct SoftArray sa;

    printf("sizeof(struct SoftArray) = %zu\n", sizeof(struct SoftArray));
    printf("&sa.len = %p, sa.array = %p\n", &sa.len, sa.array);

    return 0;
}