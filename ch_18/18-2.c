#include <stdio.h>

int main()
{
    char c = 0;
    short s = 0;
    int i = 0;
    double d = 0;
    char* p = "str";

    printf("%zu\n", sizeof(c ? c : s));   // char和short转换为int， 4
    printf("%zu\n", sizeof(i ? i : d));   // int转换为double，8
    printf("%zu\n", sizeof(d ? d : p));   // error: type mismatch in conditional expression
                                          // 指针和基本类型之间不允许隐式类型转换

    return 0;
}