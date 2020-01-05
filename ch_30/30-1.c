#include <stdio.h>

int main()
{
    char ca[] = {'H','e','l','l','o'};
    char sa[] = {'W','o','r','l','d','\0'};
    
    char ss[] = "Hello world!";  // 使用"Hello World!"这个字符数组去初始化ss数组

    char* str = "Hello World!"; //全局只读存储区，str[0]='h'是非法的

    printf("%s\n", ca);   // 打印Hello及其后面的内容，直到遇到 '\0'
    printf("%s\n", sa);   // World
    printf("%s\n", ss);   // Hello World!
    printf("%s\n",str);   // Hello World!

    return 0;
}