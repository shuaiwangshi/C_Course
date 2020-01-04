#include <stdio.h>

int main()
{
    int a[5] = {1, 2};  // 编译器将未初始化的元素初始化为0
    int b[] = {1, 2};   // 数组未指定大小 ==> 编译器根据数组初始化的情况计算其大小（占用的空间最小）

    printf("a[2] = %d\n", a[2]);    // 0
    printf("a[3] = %d\n", a[3]);    // 0
    printf("a[4] = %d\n", a[4]);    // 0

    // sizeof(数组名) ==> 计算数组的大小
    printf("sizeof(a) = %zu\n", sizeof(a)); // 20
    printf("sizeof(b) = %zu\n", sizeof(b)); // 8

    printf("count for a: %zu\n", sizeof(a)/sizeof(a[0]));   // 5
    printf("count for b: %zu\n", sizeof(b)/sizeof(b[0]));   // 2

    return 0;
}