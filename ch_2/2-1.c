#include <stdio.h>

int main()
{
    char c = -5;
    short s = 6;
    int i = -7;
 
    // 与最高位进行&运算，结果为0表示正数，结果为1表示负数
    printf("%d\n", ((c & 0x80) != 0 ));       // 1 ==> 负数
    printf("%d\n", ((s & 0x8000) != 0));      // 0 ==> 正数
    printf("%d\n", ((c & 0x80000000) != 0));  // 1 ==> 负数
 
    return 0;
}