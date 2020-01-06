#include <stdio.h>

void func1(char a[5]) // char a[5] ==> char *a
{
    printf("In func1:sizeof(a) = %d\n", sizeof(a)); // 8 ==> a退化为指针
    
    *a = 'a';
    
    a = NULL;  // a可以作为左值，证明不是数组
}

void func2(char b[]) // 数组长度有无没有关系，char b[] ==> char *b 
{
    printf("In func2:sizeof(b) = %d\n", sizeof(b)); // 8 ==> b退化为指针
    
    *b = 'b'; 
    
    b = NULL;  // a可以作为左值，证明不是数组
}

int main()
{
    char array[10] = {0};

    func1(array);
    printf("array[0] = %c\n", array[0]); // array[0] = a；

    func2(array);
    printf("array[0] = %c\n", array[0]); // array[0] = b；

    return 0;
}