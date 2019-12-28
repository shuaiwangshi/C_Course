#include <stdio.h>

int f1(int n)
{
    int ret = 0;
    
    if( n > 0 )
    {
        do
        {
            ret += n;
            n--;
        }
        while( n > 0 );
    }
    
    return ret;
}

int f2(int n)
{
    int ret = 0;
    
    while( n > 0 )
    {
        ret += n;
        n--;
    }
    
    return ret;
}

int f3(int n)
{
    int ret = 0;
    int i = 0;
    
    for(i=1; i<=n; i++)
    {
        ret += i;
    }
    
    return ret;
}

int main()
{
    printf("%d\n", f1(100));
    printf("%d\n", f2(100));
    printf("%d\n", f3(100));
    
    return 0;
}