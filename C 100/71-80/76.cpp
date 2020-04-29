/**
    2020年4月28日  21点47分
    题目：编写一个函数，输入n为偶数时，调用函数求1/2+1/4+...+1/n，当n为奇数时，调用函数1/1+1/3+...+1/n
    分析：利用指针函数
    编码：utf-8
*/

#include<stdio.h>

double func_even(int n)
{
    int i;
    double sum=0;
    for(i=2;i<=n;i+=2)
        sum=sum+1.0/i;
    return sum;
}

double func_odd(int n)
{
    int i;
    double sum=0;
    for(i=1;i<=n;i+=2)
        sum=sum+1.0/i;
    return sum;
}

int main(void)
{
	int n;
    double (*p)(int n);
    printf("please input your num: ");
    scanf("%d",&n);
    if(n%2==0)
        p=func_even;
    else
        p=func_odd;
    printf("%f\n",(*p)(n));

	return 0;
}

