#include <stdio.h>

// 打印被调用的函数的函数名，然后调用该函数
#define CALL(f,p) (printf("Call function %s\n",#f),f(p))

int square(int n)
{
    printf("Call function %s\n", __func__)
    return n*n;
}

int func(int x)
{
    return x;
}

int main()
{
    int iRet = 0;

    iRet = CALL(square, 4);  // Call function square
    printf("result = %d\n", iRet);  // result = 16
    
    iRet = CALL(func, 10);  // Call function func
    printf("result = %d\n", iRet);  // result = 10
 
    return 0;
}