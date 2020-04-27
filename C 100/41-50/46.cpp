/**
    2020年4月25日  22点30分 
    题目：宏 #define 命令练习（1）
    分析：宏定义的操作与函数是不一样的，后者有返回类型，前者并没有。
    编码：utf-8
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0
#define SQ(x) (x)*(x)

int main(void)
{
	int num;
    int again=1;
    printf("\40:Program will stop if input value less than 50.\n");
    while(again)
    {
        printf("\40:Please input number==>");
        scanf("%d",&num);

        printf("\40:The square for this number is %d\n",SQ(num));

        if(num>=50)
           again=TRUE;
        else
           again=FALSE;   
    }

	return 0;
}

