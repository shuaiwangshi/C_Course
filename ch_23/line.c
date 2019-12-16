#include <stdio.h>

int main()
{
    printf("%s : %d\n", __FILE__, __LINE__);

    #line 1 "new_line.c"    // 这里改变了行号和文件名（下一行行号为1）

    printf("%s : %d\n", __FILE__, __LINE__);

    return 0;
}