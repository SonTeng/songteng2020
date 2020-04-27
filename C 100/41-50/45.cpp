/**
    2020年4月25日  22点27分
    题目：学习使用register定义变量的方法
    分析：register声明告诉编译器，它所声明的变量在程序中使用的频率较高，其思想是，将register变量放在机器的寄存器中，这样可以使程序更小，执行速度更快。
         register声明只适合用于自动变量以及函数的形式参数。
    编码：utf-8
*/

#include<stdio.h>

int main(void)
{
	register int i;   //将循环中频繁使用的变量定义为寄存器变量，提高效率。
    int temp=0;
    for(i=1;i<=100;i++)
       temp+=i;
    
    printf("The sum is %d\n",temp);   //结果：The sum is 5050
    printf("The address is %lf\n",&i); //结果：The address is 0.000000

	return 0;
}

