/**
    2020年4月24日  17点04分
    题目：给一个不多于5位的正整数，要求：1.求它是一个几位数，2.逆序打印出各位数字。
    分析：学会分解出每一位数。
    编码：utf-8
*/

#include<stdio.h>

int main(void)
{
	int x,a,b,c,d,e;

    printf("please input the num: ");
    scanf("%d",&x);
    printf("the num you input is %d\n",x);

    a=x/10000;  // 析解出万位
    b=x%10000/1000;  //析解出千位
    c=x%1000/100;  //析解出百位
    d=x%100/10;   //析解出十位
    e=x%10;   //析解出个位

    if(a!=0)
       printf("this is 5 digits,they are %d %d %d %d %d\n",e,d,c,b,a);
    else if(b!=0)
       printf("this is 4 digits,they are %d %d %d %d\n",d,c,b,a);
    else if(c!=0)
       printf("this is 3 digit,they are %d %d %d\n",c,b,a);
    else if(d!=0)
       printf("this is 2 digit,they are %d %d\n",b,a);
    else if(e!=0)
       printf("this is only 1 digit,it is %d\n",e);

	
	return 0;
}

