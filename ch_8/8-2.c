#include <stdio.h>

/*
// 若函数没有返回值，编译器默认返回值为int类型
// 若函数没有参数，编译器默认函数可以传递任意个参数 
f()    
{

}
*/

void f(void)
{

}

int main()
{
    int i = f(1, 2, 3);

    return 0;
}