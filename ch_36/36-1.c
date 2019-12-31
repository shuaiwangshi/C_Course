#include <stdio.h>

typedef int (FUNC)(int);    // 使用typedef重命名函数类型
int test(int i)
{
    return i * i;
}

void f()
{
    printf("Call f()...\n");
}

int main()
{
    FUNC* pt = test;    // 函数名就是函数体的入口地址

    // 前面学习数组时强调过，对于int a[10];这个数组而言，a和&a的值是相同的，但它们表示的意义不同
    // 与数组不同，函数名与对函数名取址表示的意义是相同的，即下面的f和&f含义相同
    void(*pf)() = &f;   // 老式编译器可能有这种写法；现代编译器直接使用函数名即可

    // 三者的意义相同
    printf("pf = %p\n",pf);   // pf = 0x40058d
    printf("f = %p\n",f);     // f = 0x40058d
    printf("&f = %p\n",&f);   // &f = 0x40058d


    pf();   // 使用函数指针调用函数
    
    (*pf)();  // 老式写法

    printf("Function pointer call: %d\n", pt(2));   // 使用函数指针调用函数

    return 0;
}