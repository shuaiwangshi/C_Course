#include <stdio.h>

typedef int Int32;

struct _tag_point
{
    int x;
    int y;
};
typedef struct _tag_point Point;   // 前面先定义了类型，然后再重命名

typedef struct  // struct没有名字，使用typedef重命名，这种用法很常见
{
    int length;
    int array[];
} SoftArray; 


// 这里先重命名，定义放在了后面，这样也是允许的
// 编译器在处理typedef时仅仅是给一个类型重命名，并不关心这个类型具体是什么样的
// 以后在程序中碰到ListNode就当做struct _tag_list_node
typedef struct _tag_list_node ListNode; //先重命名
struct _tag_list_node                   //再定义类型
{
    ListNode* next; // 在链表中常看到这种写法
};

int main()
{
    Int32 i = -100;        // int 
    // unsigned Int32 ii = 0; //不能使用signed、unsigned修饰
    Point p;               // struct _tag_point
    SoftArray* sa = NULL;   
    ListNode* node = NULL; // struct _tag_list_node*
    
    return 0;
}