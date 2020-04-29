/**
    2020年4月29日  01点34分
    题目：某个公司采用公用电话传递数据，数据是四位的整数，在传递过程中是加密的，加密规则如下：每位数字都加上5，然后用这一位与5的和除以10的余数代替该数字，再将第一位和第四位交换，第二位和第三位交换。
    分析：
    编码：utf-8
*/

#include<stdio.h>

int main(void)
{
	int i,num,temp;
    int a[4];

    printf("please input your num(1000-9999): ");
    scanf("%d",&num);
    printf("\nthe num you input is %d\n",num);

    a[0]=num/1000;
    a[1]=num%1000/100;
    a[2]=num%100/10;
    a[3]=num%10;

    for(i=0;i<4;i++)
    {
        a[i]+=5;
        a[i]%=10;
    }

    for(i=0;i<2;i++)
    {
        temp=a[i];
        a[i]=a[4-i-1];
        a[4-i-1]=temp;
    }

    int result = a[0]*1000+a[1]*100+a[2]*10+a[3];
    printf("the result is %d\n",result);

	return 0;
}

/*
结果：
please input your num(1000-9999): 1234

the num you input is 1234
the result is 9876
*/

