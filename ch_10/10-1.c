#include <stdio.h>

// 空结构体
struct Test{

};

int main()
{
    struct Test t1;
    struct Test t2;

    printf("sizeof(struct Test) = %zu\n", sizeof(struct Test));

    printf("sizeof(t1) = %zu, &t1 = %p\n", sizeof(t1), &t1);
    printf("sizeof(t2) = %zu, &t2 = %p\n", sizeof(t2), &t2);

    return 0;
}