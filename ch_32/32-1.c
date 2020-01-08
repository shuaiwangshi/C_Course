#include <stdio.h>

typedef int (AINT5)[5];
typedef float (AFLOAT10)[10];
typedef char (ACHAR9)[9];

int main()
{ 
    AINT5 a1;   // int a1[5]
    float fArray[10];
    AFLOAT10* pf = &fArray;
    ACHAR9 cArray;

    char(*pc)[9] = &cArray;
    // char(*pcw)[4] = cArray;   // 类型不匹配，数组名表示数组首元素的地址，对数组名&表示数组的地址
    char(*pcw)[4] = (char(*)[4])cArray;

    int i = 0;
    
    printf("%zu, %zu\n", sizeof(AINT5), sizeof(a1));  // 20 20
    
    for(i=0; i<10; i++)
    {
        (*pf)[i] = (float)i;
    }

    printf("pf = %p, pf + 1 = %p\n", pf, pf+1);   // float占4字节 pf = 0x7ffdb9e61e10, pf + 1 = 0x7ffdb9e61e38

    for(i=0; i<10; i++)
    {
        printf("%f\n",fArray[i]); // 打印 0 到 9
    }

    // 0x7ffdc9e322a0, 0x7ffdc9e322a9, 0x7ffdc9e322a0 ,0x7ffdc9e322a4
    printf("%p, %p, %p ,%p\n", &cArray, pc+1, pcw, pcw+1);   // pc + 1 ==> (unsigned long)pc + 1*sizeof(*pc) ==> (unsigned long)pc + 9
                                                             // 同理 pcw + 1 = (unsigned long)pcw + 4

    return 0;
}