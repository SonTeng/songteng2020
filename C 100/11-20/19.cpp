/**
    2020年4月20日  22点19分
    题目：如果一个数恰好等于它的因子之和，就称之为完数，例如：6=1+2+3，编程找出1-1000内所有完数
    分析：参考14.cpp
    编码：utf-8
*/

#include<stdio.h>

int main(void)
{
    int num;
    int i;
    int temp;

    //printf("please input num: ");
    //scanf("%d",&num);

    for(num=2;num<1000;num++)
    {
        temp = 1;
        for(i=2;i<=num/2;i++)
        {
           if(num%i==0)
           {
             temp = temp+i;
           }
        }

        if(temp == num)
           printf("%-5d",num);

    }
	
	return 0;
}

