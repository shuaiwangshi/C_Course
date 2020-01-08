#include <stdio.h>
#include <string.h>

// DIM是维度(dimension)的缩写，一维数组的维度就是数组元素的个数
#define DIM(a) (sizeof(a)/sizeof(*a))

//table指向一个指针数组，即每个元素为指针类型
int lookup_keyword(const char* key, const char* table[], const int size) // ① 数组作为形参退化为指针类型  ② 需要传入数组长度信息
{                                                                        // char *table[] 等价于 char **table 但是后者看起来更加直观
    int ret = -1;
    int i = 0;
    
    for(i=0; i<size; i++) {
        if(strcmp(key, table[i]) == 0) {
            ret = i;
            break;
        }
    }
    
    return ret;
}

int main()
{
    const char* keyword[] = {   // 这里就是一个字符指针数组
           "do",
           "for",
           "if",
           "register",
           "return",
           "switch",
           "while",
           "case",
           "static"
    };
    
    printf("%d\n", lookup_keyword("return", keyword, DIM(keyword))); // 4
    printf("%d\n", lookup_keyword("main", keyword, DIM(keyword)));   // -1

    return 0;
}