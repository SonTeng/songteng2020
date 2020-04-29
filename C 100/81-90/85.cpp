/**
    2020年4月29日  00点43分
    题目：判断一个素数能被几个9整除
    分析：
    编码：utf-8
*/

#include<stdio.h>

int main(void)
{
	int i,num,n=9;
    printf("please input a prime num: ");
    scanf("%d",&num);

    for(i=1;;i++)
    {
        if(n%num==0)
            break;
        else
            n=n*10+9;
    }

    printf("%d can be divide by %d which contains %d the num 9\n",num,n,i);

	return 0;
}

