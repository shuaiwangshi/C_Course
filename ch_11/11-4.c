#include <stdio.h>

int main()
{
    int var = 0;

    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof(var));
    printf("%zu\n", sizeof var);

    return 0;
}

