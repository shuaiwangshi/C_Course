#include<stdio.h>

// register int g_v;   // 全局变量的生命周期从程序运行到程序结束，那么在整个过程中都要占用寄存器，但CPU寄存器的数量是有限的，长时间占用会影响CPU工作
                    // 因此不允许register修饰全局变量，register修饰全局变量编译器会直接报错，error！
int main()
{
    register char var;
   // printf("0x%08X\n", &var)；  // 寄存器变量没有地址，编译报错，error！
	
	return 0;
}
