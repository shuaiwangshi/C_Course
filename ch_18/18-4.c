#include <stdio.h>
#include <assert.h>

int my_strlen(const char *s)
{
    // return *s ? my_strlen(s + 1) +1 : 0;    // 没有考虑s为空指针
    
    return assert(s), (*s ? my_strlen(s + 1) +1 : 0);
}

int main()
{
    printf("str len = %d\n", my_strlen("2019-12-27 21:06:18"));
    printf("str len = %d\n", my_strlen(NULL));

    return 0;
}