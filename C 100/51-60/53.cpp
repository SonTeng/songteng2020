/**
    2020年4月25日  19点35分
    题目：学习使用异或 ^
    分析：0^0=0,1^0=1,0^1=1,1^1=0
    编码：utf-8
*/

#include<stdio.h>

int main(void)
{
	int a,b;
    a = 077;
    printf("\40:Line1 the a is %d\n",a);
    b = a^3;
    printf("\40:Line2 the b is %d\n",b);
    b^=7;
    printf("\40:Line3 the b is %d\n",b);

	


	return 0;
}

