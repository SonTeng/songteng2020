/**
   2020年4月9日 00点03分
   return终止函数 
*/

#include<stdio.h>

void f(void)
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("AAAAAAAAAAAAA\n");
		//break;   //终止for循环 
		//continue; //终止continue后面的语句，开始下一轮循环 
		return; //终止f函数 
	}
	printf("BBBBBBBBB\n");
}


int main(void)
{
	f();
	
	
	return 0;
}
