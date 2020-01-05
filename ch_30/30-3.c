#include <stdio.h>

int main()
{
    // 字符串字面量经过编译器编译，返回的是存储它的字符数组的地址，该字符数组村粗在程序的全局只读存储区
    char b = "abc"[0];
    char c = *("123" + 1);
    char t = *"";

    printf("%c\n", b);  // a
    printf("%c\n", c);  // 2
    printf("%d\n", t);  // 0

    printf("%s\n", "Hello");  // Hello
    printf("%p\n", "World");  // 0x400692，存储该字符串字面量的字符数组的地址
    
    return 0;
}