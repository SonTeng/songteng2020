/**
    2020年4月20日  22点01分
    题目：求s = a+aa+aaa+aaaa+aaa...a,其中a是一个数字，等式右边表达式为n项相加，n为输入值
    分析：计算出每一项的值
    编码：utf-8
*/

#include<stdio.h>

int main(void)
{
	int a,n,i=1;
	long int s=0,temp=0;

	printf("please input a: ");
	scanf("%d",&a);
	printf("please input n: ");
	scanf("%d",&n);
	printf("the two nums you input: a = %d   n = %d\n",a,n);  //a=1,n=4

    //s = a+aa+aaa+aaaa+aaa...a  
	//a=1   s = 1+11+111+1111=1234
    while (i<=n)
	{
		temp=temp+a;
		s=s+temp;
		a=a*10;
		i++;
	}
	printf("a+aa+aaa+aaa...a = %ld\n",s);
	

	
	return 0;
}

