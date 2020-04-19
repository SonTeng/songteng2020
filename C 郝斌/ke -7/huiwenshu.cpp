/**
   2020年4月7日 14点11分
   郝斌 C语言教程 
   判断回文数 ：从键盘输入一个数字，如果这个数字是回文数，则返回yes，否则返回no 
*/ 

#include<stdio.h>

int main(void)
{
	int val;
	int temp;
	int a;
	a = 0;
	printf("please the input nums: ");
	scanf("%d",&val);
	
	temp = val;
	while(temp)
	{
		a = a*10 + temp%10;
		temp /= 10;
	}
	
	if(a == val)
	   printf("yes\n");
	else
	   printf("no\n");
	
	return 0;
	
} 
