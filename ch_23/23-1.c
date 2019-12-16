#include <stdio.h>

// __cplusplus宏是C++编译器内置的一个宏，C编译器中是没有的
// 如果使用C编译器编译该程序#error就会报编译报错
#ifndef __cplusplus
    #error This file should be processed with C++ compiler
#endif

class CppClass
{
private:
    int m_nValue;
public:
    CppClass(){};
    ~CppClass(){};
};

int main()
{
    return 0;
}