#include <stdio.h>

int main()
{
    char enter = '\n';
    
    char* p = "\1410\t\x62"; // 八进制的141对应十进制的97，即a的ASCII码
                            // 十六进制的62对应十进制的98，即b的ASCII码
                            // \t 表示tab制表符
    
    printf("%s", p);        // a    b
    printf("%c", enter);    // 换行
    
    return 0;
}