#include<stdio.h>

extern int g_i;  // 告诉编译器g_i在其它的地方定义

int main()
{
    printf("%d\n", g_i);    // 先使用，后面链接时再寻找

    return 0;
}

int g_i = 0;