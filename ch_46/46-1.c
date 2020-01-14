#include <stdio.h>

// 使用宏将一片内存区域置0
#define RESET(p, len) while(len > 0) \
                        ((char *)p)[--len] = 0

// 使用函数将一片内存区域置0
void reset(void *p, int len)
{
    while(len > 0)
        ((char *)p)[--len] = 0;

}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int len = sizeof(a); 
    int i = 0;

    /*
        下面的宏和函数都可以实现置0的功能
        但是假如使用 RESET(10, len)，这个在编译期间是不错报错的，宏不会检查参数的类型
        使用reset(10, len)函数在编译时就会有warning，提示传参类型不符
    */
    // reset(a, len);
    // RESET(a, len);

    for(i = 0; i < 5; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}