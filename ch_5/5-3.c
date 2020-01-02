#include<stdio.h>

int f1()
{
    int r = 0;
    r++;

    return r;
}

int f2()
{
    static int r = 0; // 静态局部变量，只初始化一次
    r++;

    return r;
}

int main()
{
    auto int i = 0;     // 显式声明auto属性，i为栈变量
    static int k = 0;   // 局部变量k的存储区位于静态区，作用域位于main中
    register int j = 0; // 向编译器申请将j存储于寄存器中

    // 两个变量在前面是相邻定义的，地址差别却非常之大，就是前者存储在栈上，后者存储在静态区
    printf("%p\n", &i); // 0x7ffd7784424c
    printf("%p\n", &k); // 0x601048
    // printf("%p\n", &j);  // compile error，寄存器变量不能取地址

 
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", f1());    // 1 1 1 1 1
    }
 
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", f2());    // 1 2 3 4 5
    }

    return 0;
}