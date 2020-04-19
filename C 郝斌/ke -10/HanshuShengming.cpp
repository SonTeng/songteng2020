/**
      2020年4月10日 19点09分
	  函数的声明 
*/

#include<stdio.h>

void f(void);  //函数的声明，函数具体实现在main函数下面，那么在main中使用它时需要提前声明 
 
int main(void)
{
	f();
	
	
	return 0;
}

void f(void)
{
	printf("哈哈哈！\n");
} 
