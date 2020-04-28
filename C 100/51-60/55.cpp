/**
    2020年4月25日  19点56分
    题目：学习使用按位取反 ~
    分析：~0=1,~1=0
    编码：utf-8
*/

#include<stdio.h>

int main(void)
{
	int a,b;
    a=234;
    b=~a;
    printf("Line1: In decimal, a is %d, ~a is %d\n",a,b);
    a=~a;
    printf("Line2 a in hexidecimal is %x\n",a);

	


	return 0;
}

