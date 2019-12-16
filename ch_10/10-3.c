#include <stdio.h>
#include <malloc.h>

struct SoftArray
{
    int len;
    int array[];
};

struct SoftArray* create_soft_array(int size)
{
    struct SoftArray* ret = NULL;
    
    if( size > 0 )
    {
        ret = (struct SoftArray*)malloc(sizeof(struct SoftArray) + sizeof(int) * size);
        
        ret->len = size;
    }
    
    return ret;
}

void delete_soft_array(struct SoftArray* sa)
{
    free(sa);
}

void func(struct SoftArray* sa)
{
    int i = 0;
    
    if( NULL != sa )
    {
        for(i=0; i<sa->len; i++)
        {
            sa->array[i] = i + 1;
        }
    } 
}

int main()
{
    int i = 0;
    struct SoftArray* sa = create_soft_array(10);
    
    func(sa);
    
    for(i=0; i<sa->len; i++)
    {
        printf("%d\n", sa->array[i]);
    }
    
    delete_soft_array(sa);
    
    return 0;
}