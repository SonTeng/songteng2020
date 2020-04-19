/**
   运算符：自增自减
   2020年4月5日20点23分 
*/ 

#include<stdio.h>

int main(void)
{
	int i;
	int j;
	int k;
	int m;
	
	i = j = 3;
	k = i++;
	m = ++j;
	
	printf(" i = %d\n j = %d\n k = %d\n m = %d\n",i,j,k,m);
	
	
	int n = (1>0)?2:3; 
	printf(" n = %d\n",n);
	
	//逗号表达式
	i = 3;
	int p = (i++,++i,i+2,i-3);   // i+2尽管执行了，但执行结果没有对i进行赋值 
	printf(" p = %d\n",p); 
	
	return 0;
}
