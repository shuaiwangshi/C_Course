//#include <stdio.h>

int main()
{
    const char* s;

    #if( C == 1 )
        s = "This is first printf...\n";
    #else
        s = "This is second printf...\n";
    #endif

    C;

    printf("%s", s);
    
    return 0;
}
