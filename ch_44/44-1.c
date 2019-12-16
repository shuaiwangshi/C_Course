#include <stdio.h>

int func(int i, int j)
{
    printf("i = %d, j = %d\n",i, j);
    return 0;
}

int f()
{
    printf("f() Call...\n");
    return 1;
}

int g()
{
    printf("g() Call...\n");
    return 2;
}

int main()
{
    int k = 1;
    int a = 0;

    func(k++,k++); // 参数的求值顺序取决于编译器

    printf("k = %d\n", k);

    a = f() * g(); // C语言中的乘法操作也是这样，左右操作数哪个先被求值依赖于编译器

    return 0;
}