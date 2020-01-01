
#include <stdio.h>

void f1(int i)
{
    switch( i < 6 )
    {
        case 1:
            printf("Failed!\n");
            break;
        
        default:
            switch( (6 <= i) && (i <= 8) )
            {
                case 1:
                    printf("Good!\n");
                    break;
                    
                default:
                    printf("Perfect!\n");
                    break;
            }
            break;
    }
}

void f2(char i)
{
    if( 'c' == i )
    {
        printf("Compile\n");
    }
    else if( 'd' == i )
    {
        printf("Debug\n");
    }
    else if( 'o' == i )
    {
        printf("Object\n");
    }
    else if( 'r' == i )
    {
        printf("Run\n");
    }
    else
    {
        printf("Unknown\n");
    }
}

int main()
{
    f1(5);  // Failed!
    f1(9);  // Perfect!
    f1(7);  // Good!
    
    f2('o');  // Object
    f2('d');  // Debug
    f2('e');  // Unknown

    return 0;
}