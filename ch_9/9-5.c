#include <stdio.h>

const char* f(const int i)
{
    // i = 5;  // error, i不能作为左值
    
    return "swj striving! 2019-12-23 22:23:57";
}

int main()
{
    char* pc = f(0); // 编译会报warning，函数f的返回值为const char*
    
    printf("%s\n", pc);
    
    pc[1] = '_';    // error，试图修改只读存储区中的字符串
    
    printf("%s\n", pc);
    
    return 0;
}