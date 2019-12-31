#include <stdio.h>

typedef int (*Weapon)(int);

// 使用回调函数动态切换装备
void fight(Weapon wp,int arg)
{
    int result = 0;
    
    printf("Fight boss!\n");
    
    result = wp(arg);

    printf("Boss loss:%d\n",result);
}

// 使用刀作为武器
int knife(int n)
{
    int ret = 0;
    int i = 0;

    for (i=0; i< n; i++)
    {
        printf("Knife attack:%d\n",1);
        ret++;
    }

    printf("\n");

    return ret;   
}

// 使用剑作为武器
int sword(int n)
{
    int ret = 0;
    int i = 0;

    for (i=0; i< n; i++)
    {
        printf("Sword attack:%d\n",5);
        ret++;
    }

    printf("\n");

    return ret;   
}

// 使用枪作为武器
int gun(int n)
{
    int ret = 0;
    int i = 0;

    for (i=0; i< n; i++)
    {
        printf("Gun attack:%d\n",10);
        ret++;
    }

    printf("\n");

    return ret;   
}

int main()
{
    fight(knife, 3);    // 用刀砍3次
    fight(sword, 4);    // 用剑刺4次
    fight(gun, 5);      // 开枪5次

    return 0;
}

/*  程序运行结果
    Fight boss!
    Knife attack:1
    Knife attack:1
    Knife attack:1

    Boss loss:3
    Fight boss!
    Sword attack:5
    Sword attack:5
    Sword attack:5
    Sword attack:5

    Boss loss:4
    Fight boss!
    Gun attack:10
    Gun attack:10
    Gun attack:10
    Gun attack:10
    Gun attack:10

    Boss loss:5
*/