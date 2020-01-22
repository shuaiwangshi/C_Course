#include <stdio.h>

int g_var = 10;
// float g_var = 10;

struct Test
{
    int x;
    int y;
};

void f(int i,int j)
{
    printf("i + j = %d\n",i + j);
}

int g(int x)
{
    return (int)( 2 * x + g_var);   // 在编译该文件时，g_var以float型处理
}