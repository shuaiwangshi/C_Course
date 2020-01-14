#include <stdio.h>
#include <malloc.h>

#define MALLOC(type, x)  (type*)malloc(sizeof(type) * x)
#define FREE(p)          (free(p), p = NULL)

#define LOG_INT(i)        printf("%s = %d\n", #i,  i)
#define LOG_CHAR(c)       printf("%s = %c\n", #c,  c)
#define LOG_FLOAT(f)      printf("%s = %f\n", #f,  f)
#define LOG_POINTER(p)    printf("%s = %p\n", #p,  p)
#define LOG_STRING(s)     printf("%s = %s\n", #s,  s)

#define FOREACH(i, n)    while(1){ int i = 0, l = n;for(i = 0; i < l; i++)    // 使用while是为了定义一个scope，局部变量都在其中
#define BEGIN            {
#define END              }break;}

int main()
{
    int* pi = MALLOC(int, 5);  // ①可以指定数据类型，代码可读性更强 ②返回的void *指针已经进行了强制类型转换
    char* str = "2020-01-14 22:38:27";

    LOG_STRING(str);  // str = 2020-01-14 22:38:27

    LOG_POINTER(pi);  // pi = 0x74f010

/*
    while(1){ int k = 0, l = 5;for(k = 0; k < l; k++)
    {
        pi[k] = k + 1;
    }break;}
*/
    FOREACH(k, 5)
    BEGIN
        pi[k] = k + 1;  // 对pi对应的堆空间赋值
    END

/*
    while(1){ int k = 0, l = 5; for(k = 0; k < l; k++)
    {
        int value = pi[k];
        printf("%s = %d\n", "value", value);
    }break;}
*/
    FOREACH(k, 5)
    BEGIN
        int value = pi[k];  // 遍历pi对应的堆空间
        LOG_INT(value);    
    END

    FREE(pi);   // 安全的释放动态内存

    LOG_POINTER(pi);    // pi = nil

    return 0;
}