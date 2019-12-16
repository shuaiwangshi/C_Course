#include <stdio.h>

#pragma pack(4)
struct test {
    char a;
    char b;
    short s;
    char e;

};
#pragma pack()

#pragma pack(8)
struct test1 {
    short a;
    long b;
};
#pragma pack()


int main()
{
    printf("sizeof(long) = %zu\n", sizeof(double));

    printf("sizeof(struct test) = %zu\n", sizeof(struct test));
    printf("sizeof(struct test1) = %zu\n", sizeof(struct test1));

    return 0;
}