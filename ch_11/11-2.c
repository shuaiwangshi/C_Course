#include <stdio.h>

enum                   //无名枚举，用于定义常量
{
    ARRAY_SIZE = 10    //定义数组大小，ARRAY_SIZE是常量，运行时无法改变
};

enum Color
{
    RED    = 0x00FF0000,
    GREEN  = 0x0000FF00,
    BLUE   = 0x000000FF,  //注意，后面没分号
};

//打印，参数为枚举类型
void PrintColor(enum Color c)
{
    switch( c )
    {
        case RED:
            printf("Color: RED (0x%08X)\n", c);
            break;
        case GREEN:
            printf("Color: GREEN (0x%08X)\n", c);
            break;
        case BLUE:
            printf("Color: BLUE(0x%08X)\n", c);
            break;
    }
}

//初始化数据
void InitArray(int array[])
{
    int i = 0;
    
    for(i=0; i<ARRAY_SIZE; i++)
    {
        array[i] = i + 1;
    }
}

void PrintArray(int array[])
{
    int i = 0;
    
    for(i=0; i<ARRAY_SIZE; i++)
    {
        printf("%d\n", array[i]);
    }
}

int main()
{
    enum Color c = GREEN; //定义变量c并初始化为GREEN
    
    int array[ARRAY_SIZE] = {0};
    
    PrintColor(c);
    
    InitArray(array);
    
    PrintArray(array);
    
    return 0;
}