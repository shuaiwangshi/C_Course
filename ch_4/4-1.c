#include <stdio.h>

struct TS {
    int i;
    int j;
};

struct TS ts;
                                                                                                                                                                       
int main()
{
    short s = 0x1122;

    char c = (short)s;  // 目标类型不能容纳目标值，产生截断，取内存中的最后一个字节，0x22

    int i = (int)s;     // 目标类型能够容纳目标值，结果不变，0x1122

    int j = (int)3.1415;    // 浮点数和整型在内存中的表示方法不同，截断的方法就是舍弃小数部分，取整数部分
                            // 3

    unsigned int p = (unsigned int)&ts; // 在32位系统上指针为4字节，是可以的；在64位系统上指针为8字节，会产生截断

    //long l = (long)ts;  // 两种类型之间不能进行强制类型转换，编译报错   error: aggregate value used where an integer was expected
    // ts = (struct TS)l;  // 与上面相同，编译报错
   
    printf("s = 0x%x\n", s);    // 0x1122
    printf("c = 0x%x\n", c);    // 0x22
    printf("i = 0x%x\n", i);    // 0x1122
    printf("j = 0x%x\n", j);    // 0x3
    printf("p = 0x%x\n", p);    // 0x601044
    printf("&ts = %p\n", &ts);  // 0x601044

    return 0;
}