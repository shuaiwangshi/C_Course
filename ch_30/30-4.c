#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "Hello\0World";  // 以第一个出现的'\0'作为字符串的结束符

    int i = 0;
    for (i=0; i<sizeof(s)/sizeof(s[0]); i++) {
        printf("%c\n", s[i]);
    }

    printf("%zu\n", strlen(s));   // 5
    printf("%zu\n", strlen("123"));   // 3

    return 0;
}

/*
    H
    e
    l
    l
    o

    W
    o
    r
    l
    d

    5
    3
*/