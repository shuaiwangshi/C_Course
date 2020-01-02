#include <stdio.h>

int g_v;             // 全局变量，程序的任意地方均能访问
static int g_vs;     // 静态全局变量，只有当前文件中可访问

int main()
{
   int var;          // 局部变量，在栈上分配空间
   static int svar;  // 静态局部变量，在静态数据区分配空间
   
   return 0;
}