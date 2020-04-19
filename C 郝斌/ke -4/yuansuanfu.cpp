/**
   内容：测试运算符：整除 

*/

#include<stdio.h>

int main(void)
{
	int s = 0;
	
	/** 
	int i;
	int j = 30;
	for(i=1;i<=5;i++)
	{
		s += j/i;
	}
	
	printf("s = %d\n",s);
	*/
	
	printf("除法运算符结果测试1：%d\n",17/3);
	printf("除法运算符结果测试2：%f\n",17/3.0);
	printf("除法运算符结果测试3：%f\n",17.0/3);
	
	printf("取余运算符结果测试1：%d\n",-13%3);
	printf("取余运算符结果测试2：%d\n",13%-3);
	printf("取余运算符结果测试3：%d\n",-13%-3);
	printf("取余运算符结果测试4：%d\n",-13%-23);
	
	//逻辑运算符
	int k = 33;
	int m;
	m = (3>2) && (k==8);
	printf("m = %d, k = %d\n",m,k); 
	m = (3>2) && (k=8);
	printf("m = %d, k = %d\n",m,k);
	m = (1>2) && (k=75);
	printf("m = %d, k = %d\n",m,k);
	//此时：m=0;k=8
	m = (1>2) || (k=75);
	printf("m = %d, k = %d\n",m,k);  //结果为：m=1,k=75 
	
	
	int q = 0;
	(q = 3 + 2 * 4 && 5 || 6 - 4)+=6 ;
	printf("q = %d\n",q); 
	
	int p;
	char ch1 ;
	printf("please intput p: ");
	scanf("%d",&p);                    //如果在此处输入123m，则ch1不用再输入，而是直接将m赋值给ch1 
	printf("p = %d\n",p);
	printf("please input ch1: ");
	scanf("%c",&ch1);
	printf("ch1 = %c\n",ch1);
	
	
	
	return 0;
} 
