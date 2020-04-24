/**
    2020年4月24日  16点45分
    题目：利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来
    分析：
    编码：utf-8
*/

#include<stdio.h>

void palin(int n)
{
    char next;
    if(n<=1)
    {
        next = getchar();
        printf("\n\0:");  //C语言中以\0为字符串的结束标识符
        putchar(next);
    }
    else
    {
        next = getchar();
        palin(n-1);
        putchar(next);
    }
    
}

int main(void)
{
	printf("\40:");   //输出结果：空格加冒号
    //int i =5;
    palin(5);
    printf("\n");

	
	return 0;
}


/**
结果：
输入：apple  //不要带空格
输出:elppa
*/
