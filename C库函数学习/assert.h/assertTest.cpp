#include<stdio.h>
//#define NDEBUG  有此句，则assert()语句失效。
#include<assert.h>

int main()
{
    int i=0;

    for(i;i<15;i++)
    {
        assert(i<=10);  //assert(int expression),若expression为真，则执行下一句，若为假，则中断程序
        printf("i=%d\n",i);
    }



    return 0;
}