/**
    2020年4月29日  01点25分
    题目：读取7个数（1-50）的整数值，每读取一个值，程序打印出该值个数的*
    分析：
    编码：utf-8
*/

#include<stdio.h>

int main(void)
{
	int i,num,n=1;
    
    while(n<=7)
    {
        do
        {
            printf("please input your No.%d num: ",n);
            scanf("%d",&num);
        }while(num<1 || num>50);
        for(i=1;i<=num;i++)
            printf("*");
        printf("\n");
        n++;
    }
    
	return 0;
}

