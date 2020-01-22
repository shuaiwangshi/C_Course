#include <stdio.h>
#include <malloc.h>

// 声明，告诉编译器g_var在外部的文件中
extern int g_var;
// extern float g_var;


struct Test;  // extern struct Test;  extern可以省略

int main()
{
    // 声明两个函数
    extern void f(int,int);
    extern int g(int);

    struct Test* p = NULL; // 可以这样定义指针，，但是不能定义该结构体对用的变量

    // struct Test* p = (struct Test*)malloc(sizeof(struct Test));  // error，因为在编译该文件时不知道struct Test的具体成员，也就不知道它的大小

    printf("p = %p\n", p);

    //g_var = 10;

    printf("g_var = %d\n", g_var);  // 如果前面是 extern float g_varl; 这里打印垃圾值，浮点数和整型在内存中的存储方式不同

    f(1, 2);  // i + j = 3
   
    printf("g(3) = %d\n",g(3));  // g(3) = 16

    free(p);

    return 0;
}