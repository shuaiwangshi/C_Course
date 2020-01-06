#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5}; 
    int* p1 = (int*)(&a + 1);       // 指向数组元素5的后一个位置
    int* p2 = (int*)((int)a + 1);   // 指向数组 (起始地址 + 1字节) 处，这里是整数运算，不是指针运算
    int* p3 = (int*)(a + 1);        // 指向第2个元素

    printf("%d\n", p1[-1]);   // 5
    printf("%d\n", p2[0]);    // 33554432
    printf("%d\n", p3[1]);    // 2

    return 0;
}