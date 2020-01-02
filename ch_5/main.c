#include<stdio.h>

extern int getI(); // extern声明getI()是在其它地方定义的

int main()
{
    printf("%d\n", getI());   // 0                   

    return 0;
}