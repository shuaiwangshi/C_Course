#include <stdio.h>

int main()
{
    char s1[]={'H','e','l','l','o'};
    int i=0;
    char s2[]={'W','o','r','l','d'};
    char* p0 = s1;
    char* p1= &s1[3];
    char* p2 = s2;
    int*  p = &i;

    printf("%ld\n", p0 - p1);     // -3
    // printf("%ld\n", p0 + p2);  // compile error，指针之间不允许加法运算
    printf("%ld\n", p0 - p2);     // 语法正确，但是p0和p2指向两个不同的数组，结果没有意义
    // printf("%ld\n", p0 - p);   // compile error，不同类型指针之间不能相减
    // printf("%ld\n", p0 * p2);  // compile error，指针之间不允许乘法运算
    // printf("%ld\n", p0 / p2);  // compile error，指针之间不允许除法运算
  
    return 0;
}