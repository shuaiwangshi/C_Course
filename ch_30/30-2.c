#include <stdio.h>

int main()
{
    char b = "abc"[0];
    char c = *("123" + 1);
    char t = *("");

    printf("b = %c\n", b);
    printf("c = %c\n", c);
    printf("t = %c\n", t);

    return 0;
}