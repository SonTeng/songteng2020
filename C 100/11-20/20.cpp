/**
    2020年4月20日  22点45分 
    题目：一球从100米高度自由落下，每次落地后反弹回原高度的一半，再落下，求它在10次落地时，共经过多少米，第10次的反弹有多高？
    分析：
    编码：utf-8
*/

#include<stdio.h>

int main(void)
{
	double sum=0,high=100,fanhigh=0;
    int i;

    for(i=1;i<=10;i++)
    {
        sum=sum+high;
        fanhigh = high/2;
        sum=sum+fanhigh;
        high = fanhigh;
    }
    
    printf("第10次落地时共经过 %.2f 米，其反弹高度为 %.2f 米\n",sum,fanhigh);
	
	return 0;
}

