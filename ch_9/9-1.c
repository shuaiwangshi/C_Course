#include <stdio.h>

int main()
{
    const int cc = 1;

    int *p = (int*)&cc;

    // cc = 10;  // error: assignment of read-only variable ‘cc’

    printf("cc = %d\n", cc);    // cc = 1

    *p = 10;

    printf("cc = %d\n", cc);    // cc = 10

    return 0;
}