#include <stdio.h>

int func() {
    printf("This is test!\n");
    return 0;
}

int main()
{
    int var = 0;

    int size = sizeof(var++);
    printf("var = %d, size = %d\n", var, size);

    size = sizeof(func());
    printf("size = %d\n", size);

    return 0;
}