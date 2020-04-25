/**
    2020年4月24日  19点41分
    题目：练习函数调用
    分析：
    编码：utf-8
*/

#include<stdio.h>

void fun1()
{
    printf("hello world!\n");
}

void fun2()
{
    int i;
    for(i=0;i<=2;i++)
    {
        fun1();
    }
}

int main(void)
{
	fun2();

	return 0;
}

