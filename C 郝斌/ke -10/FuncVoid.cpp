/**
   2020年4月8日 23点31分
   函数形参void 
*/

#include<stdio.h>

int func(void)  //形参void表示该函数不能接收数据，int表示函数返回值是int类型 
{
	return 10;  //return表示向主调函数返回10 
} 

void g(void) //第一个void表示该函数没有返回值 
{
	//return 0;//因为void表示没有返回值，而return表示有返回值，故语法错误 
}

int main(void)  
{
	int j;
	j = 99;
	
	j = func();
	//j = func(80);//错误 
	//j = g();//因为g函数没有返回值，故赋值错误。 
	printf("j = %d\n",j);	
	
	return 0;
}
