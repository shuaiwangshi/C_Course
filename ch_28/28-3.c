#include <stdio.h>

// 数组元素的个数
#define DIM(a)  (sizeof(a) / sizeof(*a))

int main()
{
    
    char s[]={'H','e','l','l','o'};  
    char* pBegin = s;
    char* pEnd = s + DIM(s);   // 数组末尾的后一个地址
    char* p = NULL;
    
    printf("pBegin  = %p\n", pBegin);
    printf("pEnd  = %p\n", pEnd);
  
    printf("Size: %ld\n", pEnd - pBegin); // 5
    
    for (p = pBegin; p < pEnd; p++)  // Hello
    {
         printf("%c",*p);
    }

    printf("\n");
  
    return 0;
}