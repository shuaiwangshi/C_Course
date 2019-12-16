#include<stdio.h>

int main()
{
    char c;
    short s;
    int i;

    printf("%zu, %zu\n", sizeof(char), sizeof(c));   // 1，1
    printf("%zu, %zu\n", sizeof(short), sizeof(s));  // 2，2
    printf("%zu, %zu\n", sizeof(int), sizeof(i));    // 4，4  

    return 0;
}