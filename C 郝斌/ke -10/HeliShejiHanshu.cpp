/**
   2020年4月10日 19点48分
   如何合理设计函数
   判断一个函数实现好不好，要看代码的可重复利用性高不高 
   用单个函数实现，代码的可重用性提高
   程序：给定一个数字，输出1~该数字之间的所有素数并将其输出 
*/

#include<stdio.h>

bool isPrime(int val)
{
	int i;
	for(i=2;i<val;i++)
	   if(val%i == 0)
	      break;
	      
	if(i == val)
	   return true;
	else
	   return false;
	   
}

void printPrime(int m)
{
	
	if(isPrime(m))
	  printf("%-8d",m);
	//else
	//  printf("the num you input %5d is not a prime num!\n",m);
} 

void traverseVal(int n)
{
	printf("the prime nums between 1 and %d are: \n",n);
	int j;
	for(j=2;j<=n;j++){
		printPrime(j);
	}
}

int main(void)
{
	int num;
	printf("please input the num: ");
	scanf("%d",&num);
	
	traverseVal(num);
	
	return 0;
}
