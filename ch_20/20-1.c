#include <stdio.h>

extern char* name();
extern int add(int a, int b);

int main()
{
    printf("Name: %s\n", name());
    printf("Result: %d\n", add(2, 3));

    return 0;
}