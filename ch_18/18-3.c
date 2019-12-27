#include <stdio.h>

void hello()
{
    printf("Hello!\n");
}

int main()
{
    // 二维数组使用大括号初{ }始化，不能使用小括号
    int a[3][3] = {
        (0, 1, 2),  // 注意这里是逗号表达式，最终结果为2
        (3, 4, 5),  // 注意这里是逗号表达式，最终结果为5
        (6, 7, 8)   // 注意这里是逗号表达式，最终结果为8
    };

    int i = 0;
    int j = 0;

    // 下面会出现死循环吗？
    while (i < 5)
        printf("i=%d\n", i), // 注意这里是逗号而不是分号

    hello(),

    i++;

    for (i = 0; i < 3;i++){
        for (j = 0; j < 3;j++){
            printf("a[%d][%d] = %d\n", i, j, a[i][j]);
        }
    }
    return 0;
}