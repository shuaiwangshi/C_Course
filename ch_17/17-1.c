#include <stdio.h>

int main()
{
    int i = 0;
    int r = 0;

    r = (i++) + (i++) + (i++);

    printf("i = %d\n", i);
    printf("r = %d\n", r);

    r = (++i) + (++i) + (++i);

    printf("i = %d\n", i);
    printf("r = %d\n", r);
    
    return 0;
}