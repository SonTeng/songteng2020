/**
   实参和形参永远不可能是同一个变量，一个（实参）是全局/局部变量，另一个（形参）是局部变量
*/

#include<stdio.h>

void f(int i)
{
    i = 99;
}

int main(void)
{
	int i = 6;    //这个i和void f(int i)中的i不是同一个

    printf("i = %d\n",i);

    f(i);

    printf("i = %d\n",i);

	
	return 0;
}
