/**
    2020年4月15日 17点27分
    多级指针
*/

#include<stdio.h>

int main(void)
{
	int i = 5;
    int *p = &i;  //p是个变量，是个指针变量，是有地址的，占4B  // 只有指针才能存放地址
    int **q = &p;
    int ***r = &q;

    //r = &p;  //error,因为r是int ***类型，r只能存放int **类型
	printf("i = %d\n",***r);
	return 0;
}
