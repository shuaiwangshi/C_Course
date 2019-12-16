#include <stdio.h>

//利用中间变量交换
#define SWAP1(a, b)    \
{                      \
    int t = a;         \
    a = b;             \
    b = t;             \
}

//利用部分和来交换
#define SWAP2(a, b)    \
{                      \
    a = a + b;         \
    b = a - b;         \
    a = a - b;         \
}

//利用异或运算
#define SWAP3(a, b)    \
{                      \
    a = a ^ b;         \
    b = a ^ b;         \
    a = a ^ b;         \
}

int main()
{
    int a = 1;
    int b = 2;
    
    
    printf("a = %d\n", a); 
    printf("b = %d\n", b); 
    
    SWAP3(a ,b);
    
    printf("a = %d\n", a); 
    printf("b = %d\n", b); 
    
    return 0;
}