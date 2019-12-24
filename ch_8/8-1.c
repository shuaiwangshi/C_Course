#include <stdio.h>
#include <malloc.h>

void func(int n)
{
    int* p = NULL;

    if(  n < 0 )
    {
        goto STATUS;
    }

    p = (int*)malloc(sizeof(int) * n);//n<0时，将不被执行
    
STATUS:
    p[0] = n;    //n<0时，p内存未申请，出现错误
    
    free(p);
}

int main()
{  
    printf("begin...\n");

    printf("func(1)\n");
    func(1);
    
    printf("func(-1)\n");
    func(-1);
    
    printf("end...\n");
    
    return 0;
}