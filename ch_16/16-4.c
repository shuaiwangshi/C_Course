#include <stdio.h>

int main()
{
    int i = 0;
    int j = 0;
    int k = 0;
    
    //短路规则， ++i || (++j && ++k)
    if( ++i || ++j && ++k )
    {
        printf("Run here...\n");
    }
    
    printf("i = %d\n", i);  // 1
    printf("j = %d\n", j);  // 0
    printf("k = %d\n", k);  // 0

    return 0;
}