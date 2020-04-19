/**
    2020年4月10日 19点18分
	函数的调用与函数的定义的顺序 
*/

#include<stdio.h>

void f(void); //如果没有这句话，以下面的函数顺序，一定出错，即f必须比g先声明才行 

void g(void)
{
	f();
}

void f(void)
{
	printf("哦哦哦哦哦！\n");
} 


int main(void)//
{
	g();
	
	
	return 0;
}
