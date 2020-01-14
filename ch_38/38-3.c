#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main()
{
    int *pI = malloc(SIZE * sizeof(int));
    short *pS = calloc(SIZE, sizeof(short));

    int i;
    for (i=0; i<SIZE; i++) {
        /*
            在Linux上，malloc的打印也为0，这个只是编译器的特性，不写写依赖编译器的代码，不具有可移植性
            在Windows上，malloc的打印就是随机值
            calloc的打印在Linux和Windows上都为0
        */
        printf("pI[%d] = %d, pS[%d] = %hd\n", i, pI[i], i, pS[i]);
    }

    printf("Before: pI = %p\n", pI);  // Before: pI = 0x23b7010

    pI = realloc(pI, 2 * SIZE * sizeof(int));

    printf("After: pI = %p\n", pI);   // After: pI = 0x23b7050
                                      // 可以看到使用realloc重新申请内存后，pI的值变了

    for (i=0; i < 2*SIZE; i++) {
        printf("pI[%d] = %d\n", i, pI[i]);
    }

    return 0;
}