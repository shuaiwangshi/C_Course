#include <stdio.h>

int main()
{
    printf("cc sizeof(void) = %zu\n", sizeof(void));    // 在ANSI C编译器中编译无法通过
                                                        // 在支持GNU标准的gcc编译器中编译通过，结果为1

    return 0;
}