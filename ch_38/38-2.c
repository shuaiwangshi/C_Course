#include <stdlib.h>
#include <stdio.h>


int main()
{
    char *mp = malloc(10);
    
    int i = 0;
    for (i=0; i<10; i++){
        *(mp+i) = 's';
    }

    for (i=0; i<10; i++){
        // printf("%c\n", *(mp+i));
    }

    printf("\n");

    char *rp = realloc(NULL, 20);
    
    for (i=0; i<20; i++){
        printf("%c\n", *(rp+i));
    }




    return 0;
}