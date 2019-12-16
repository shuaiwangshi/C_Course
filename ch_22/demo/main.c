#include <stdio.h>
#include "product.h"

#if DEBUG
    #define LOG(s) printf("[%s:%d] %s\n",__FILE__,__LINE__,s)
#else
    #define LOG(s) NULL  //LOG(s)将被预编译器处理成((void*)0)
#endif

#if HIGH
void f()
{
    printf("This is the high level product!\n");
}
#else
void f()
{
}
#endif

int main()
{
    LOG("Enter main()...");
    f();
    
    printf("1. Query Information.\n");
    printf("2. Record Information.\n");
    printf("3. Delete Information.\n");
    
    #if HIGH    
        printf("4. High Level Query.\n");
        printf("5. Mannual Service.\n");
        printf("6. Exit.\n");      
    #else
        printf("4. Exit.\n");  
    #endif
    
    LOG("Exit main()...");
}