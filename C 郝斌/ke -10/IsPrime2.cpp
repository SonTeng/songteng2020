/**
   2020年4月10日 16点24分
   素数判断+结构化代码 
*/

#include<stdio.h>

bool isPrime(int val)  //功能要分开写，这个函数只判断是不是素数，至于结果如果处理，则不写在这个函数中 
{
	int i;
	
	for(i=2;i<val;i++)
	   if(val%i == 0)
	      break;
	if(i==val)
	   return true;
	else
	   return false;
}

int main(void)
{
	int m;
	printf("please input the nmu: ");
	scanf("%d",&m);
	
	if(isPrime(m))
	    printf("Yes!\n");
	else
	    printf("No!\n");
	
	return 0;
}
