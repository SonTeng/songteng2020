/**
    2020年4月24日  16点04分
    题目：有一个分数序列：2/1,3/2,5/3,8/5,13/8,21/13.....求出这个数列的前20项之和
    分析：注意观察分子和分母的规律
    编码：utf-8
*/

#include<stdio.h>

int main(void)
{
	int n,t,number=20;
    float a=2,b=1,s=0;
    for(n=1;n<=number;n++)
    {
        s = s + a/b;
        t = a;
        a = a + b;
        b = t;
    }
    printf("sum is %-9.6f\n",s);

	
	return 0;
}

