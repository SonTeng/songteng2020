/**
    2020年4月15日  17点43分
    讲多级指针的目的，主要是跨函数使用内存
*/

#include<stdio.h>

int f(int **q)
{
    //*q就是p
    **q = 100;
}

int g(int i)
{
    //int = 10;
    int *p = &i;
    printf("i = %d\n",i);   // i=50
    f(&p);   //p是int *类型，所以&p是int **类型
    printf("i = %d\n",i);  // i=100
}

int h(int *r)
{
    *r = 250;
}

int main(void)
{
	int m = 50;
    g(m);   //不可能改变m的值，除非发送m的地址才可以

    printf("m = %d\n",m);   // m = 50,形参和实参

    printf("====================\n");

    h(&m);
    printf("m = %d\n",m);  //  m=250

	
	return 0;
}
