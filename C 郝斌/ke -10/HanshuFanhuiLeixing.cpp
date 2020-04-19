/**
   2020年4月8日 23点52分
   函数返回类型和函数执行体返回类型不一致 
*/

#include<stdio.h>

int f()   //f的返回类型为int类型 
{
	return 10.6;  //return返回为float类型 
}


int main(void)
{
	double x;
	x=f();
	
	printf("x = %lf\n",x);   //结果为：x = 10.000000 
	
	
	return 0;
}
