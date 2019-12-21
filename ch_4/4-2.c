#include <stdio.h>

int main()
{
    char c = 'a';   // 97

    int i = c;  // 低类型==>高类型，安全

    unsigned int j = 0x11223344;

    short s = j; // 高类型==>低类型，不安全
 
    printf("c = %c\n", c);      // ‘a’
    printf("i = %d\n", i);      // 97
    printf("j = 0x%x\n", j);    // 0x11223344
    printf("s = %x\n", s);      // 0x3344
    printf("sizeof(c+s) = %d\n", sizeof(c+s)); // char和short都会先转化为int，然后进行运算，结果为4

    return 0;
}