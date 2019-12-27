#include <stdio.h>

int main()
{
    int a = 1;
    int b = 2;
    int c = 0;

    c = (a < b) ? a : b;
    // ((a < b) ? a : b) = 3;  // 编译报错 error: lvalue required as left operand of assignment
                            // 三目运算符最终返回的是一个值，而不是一个变量，不能作为左操作数
    // 1 = 10；    // error: lvalue required as left operand of assignment  相同的错误

    // 要想使用三目运算符对某一变量赋值，可以使用变量的地址进行操作
    *(a < b ? &a : &b) = 3;

    printf("a = %d\n", a);  // 3
    printf("b = %d\n", b);  // 2
    printf("c = %d\n", c);  // 1

    return 0;
}