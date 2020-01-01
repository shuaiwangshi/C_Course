#include <stdio.h>
#include <dlfcn.h>

int main()
{
    void* pdlib = dlopen("./dlib.so", RTLD_LAZY);   // 打开动态链接库

    char* (*pname)();   // 定义函数指针
    int (*padd)(int, int);

    if( pdlib != NULL )
    {
        // 在动态链接库中查找相应的函数入口地址
        pname = dlsym(pdlib, "name");
        padd = dlsym(pdlib, "add");
 
        if( (pname != NULL) && (padd != NULL) )
        {
            printf("Name: %s\n", pname());
            printf("Result: %d\n", padd(2, 3));
        }
    
        dlclose(pdlib);  // 关闭动态链接库
    }
    else
    {
        printf("Cannot open lib ...\n");
    }

    return 0;

}