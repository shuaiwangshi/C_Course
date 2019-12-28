#include <stdio.h>

void f1(int n)
{
    int i = 0;
    
    for(i=1; i<=n; i++)
    {
        if( (i % 2) == 0 )
        {
            break;  // 跳出循环
        }
        
        printf("%d ", i);
    }
    
    printf("\n");
}

void f2(int n)
{
    int i = 0;
    
    for(i=1; i<=n; i++)
    {
        if( (i % 2) == 0 )
        {
            continue;   // 终止本次循环，进入下次循环
        }
        
        printf("%d ", i);
    }
    
    printf("\n");
}

int main()
{
    f1(10);  // 1
    f2(10);  // 1 3 5 7 9
    
    return 0;
}