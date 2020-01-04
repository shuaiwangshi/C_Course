#include <stdio.h>

int main(){
    
    int a[5] = {0};
    int b[2];
    int* p = NULL;

    p = a;

    printf("a = %p\n", a);    // 0x7ffe40054a70, 数组a首元素的地址
    printf("p = %p\n", p);    // 0x7ffe40054a70
    printf("&p = %p\n", &p);  // 指针p的地址, 0x7ffe40054a68

    printf("sizeof(a) = %zu\n", sizeof(a));   // 数组a的大小, 20
    printf("sizeof(p) = %zu\n", sizeof(p));   // 指针的大小为8(64位系统)

    printf("\n");
    
    p = b;

    printf("b = %p\n", b);    // 0x7ffe40054a60, 数组b首元素的地址
    printf("p = %p\n", p);    // 0x7ffe40054a60
    printf("&p = %p\n", &p);  // 指针p的地址, 0x7ffe40054a68

    printf("sizeof(b) = %zu\n", sizeof(b));  //数组的大小, 8
    printf("sizeof(p) = %zu\n", sizeof(p));  //指针的大小为8(64位系统)

    // a = b;  // compile error, 数组名不能作为左值  
               // error: incompatible types when assigning to type ‘int[5]’ from type ‘int *’

    return 0;
}