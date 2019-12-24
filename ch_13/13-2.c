#include <stdio.h>

// 该宏实现两个变量值的交换
// 使用接续符，宏代码块更美观，可读性更强
#define SWAP(a,b)      \
{                      \
    int temp = a;      \
    a = b;             \
    b = temp;          \
}

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;
    
    SWAP(a,b);
    
    printf("a = %d, b = %d\n", a, b);   // a = 2, b = 1
    
    SWAP(b,c);
    
    printf("b = %d, c = %d\n", b, c);   // b = 3, c = 1
    
    return 0;
}