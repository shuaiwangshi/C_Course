//#include<stdio.h>

int main()
{
    int/**/i;                             //合法int i;

    char* s = "abcdefg     //ijklmn";     //合法引号内的双斜杠

    // Is it a \
     valid comment?                       //合法，上一行以“\”换行。

    in/**/t j;                            //不合法，in t j;

    return 0;
}