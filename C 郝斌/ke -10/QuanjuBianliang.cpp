/**
   2020年4月10日  21点38分
   全局变量和局部变量 
*/

#include<stdio.h>

int k = 1000;    //全局变量 

void g(void)
{
	printf("k = %d\n",k);
}
 
void f(void)
{
	g();
	int j = 20;   // j是局部变量 
	printf("%d / %d = %d\n",k,j,k/j);
 } 

int main(void)
{
	int i;   //i是局部变量 
	f();
	
	//k = 10;
	//printf("k = %d\n",k);
	
	
	return 0;
}
