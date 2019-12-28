#include <stdio.h>
#include <malloc.h>

int func(int n)
{
    int i = 0;
    int ret = 0;
    int* p = (int*)malloc(sizeof(int) * n);
    
    do
    {
        if( NULL == p ) break;  // 注意这里break的用法
        
        if( n < 5 ) break;

        if( n > 100) break;
        
        for(i=0; i<n; i++)
        {
            p[i] = i;
            printf("%d\n", p[i]);
        }
        
        ret = 1;
    }while( 0 );
    
    printf("free(p)\n");
    
    free(p);    // 在任何情况下，free(p)都会被执行，不会泄露内存
    
    return ret;
}

int main()
{
    if( func(4) )
    {
        printf("OK\n");
    }
    else
    {
        printf("ERROR\n");
    }

    return 0;
}