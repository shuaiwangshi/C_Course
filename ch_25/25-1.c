// #include <stdio.h>

#define STRING(x)  #x    // 将宏参数x转换为字符串

int main()
{
    printf("%s\n", STRING(Hello World!));   // "Hello World!"
    printf("%s\n", STRING(100));            // "100"
    printf("%s\n", STRING(while));          // "while"
    printf("%s\n", STRING(return));         // "return"
   
    return 0;
}