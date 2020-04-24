/**
    2020年4月24日  16点11分
    题目：求1+2！+3！+4！+...+20！的和
    分析：把累加变成累乘
    编码：utf-8
*/

#include<stdio.h>

int main(void)
{
	int n;
    float s=0,t=1;
    for(n=1;n<=20;n++)
    {
        t = t * n;  //用t来暂存上一次的阶乘结果
        s = s + t; 
    }

    printf("1+2!+3!+...+20! = %e\n",s);// %e是按指数的形式输出,e表示10的N次方

	
	return 0;
}

