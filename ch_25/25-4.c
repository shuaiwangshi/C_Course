#include <stdio.h>

/*
typedef struct _tag_Student Student;
struct _tag_Student {
    int id;
    char *name;
};
*/

// 当工程中有很多结构体时，这样可以提高代码编写效率
#define Struct(arg) typedef struct _tag_##arg arg;\
                            struct _tag_##arg

Struct(Student) {
    int id;
    char *name;
};

int main()
{
    Student s1;
    Student s2;

    s1.id = 0;
    s1.name = "Scott";

    s2.id = 0;
    s2.name = "Fugui";

    printf("s1.id = %d\n", s1.id);
    printf("s1.name = %s\n", s1.name);

    printf("s2.id = %d\n", s2.id);
    printf("s2.name = %s\n", s2.name);

   return 0;
}