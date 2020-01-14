#include <stdio.h>
#include <malloc.h>

void func()
{

        char *pc = malloc(100);
    int i = 0;
    for (i=0; i<100; i++){
        *(pc+i) = 's';
    }
    free(pc);
}

int main()
{
    func();

    int *p = malloc(10);

    printf("p = %p\n", p);
    printf("*p = %d\n", *p);

    p = calloc(10, sizeof(int));
    printf("p = %p\n", p);
    p = calloc(0, sizeof(int));
    printf("p = %p\n", p);

    return 0;
}