// bool类型   ==>  bool型变量应该直接出现在条件中，不要进行比较
bool b = true;
if (b) 
{
    // statement1
} 
else 
{
    // statement2
}


// 整型  ==>  变量和0值比较时，0值应该出现在比较符号左边；防止将 == 写成 =，那样条件永远不成立； 0放在左边，误写为=会编译报错
int i = 1;
if (0 == i) 
{           
    // statement1
}
else
{
    // statement2
}


// float型  ==>  因为float是不精确表示，0.0在内存中的表示可能是与其相近的一个值，所以不能直接和0值比较，需要定义精度
#define EPSINON 0.00000001

flaot f = 0.0;

if( (-EPSINON <= f) && (f <= EPSINON) )
{
    // statement 1
}
else
{
    // statement 2
}
