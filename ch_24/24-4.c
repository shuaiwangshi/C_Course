#include <stdio.h>

#pragma pack(8)

struct S1
{
    short a;
    long b;
};

struct S2
{
    char c;
    struct S1 d;
    double e;
};

#pragma pack()

int main()
{
    printf("%zu\n", sizeof(struct S1));
    printf("%zu\n", sizeof(struct S2));

    return 0;
}
