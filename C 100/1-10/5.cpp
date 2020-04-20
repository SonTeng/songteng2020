/**
    2020年4月20日  
    题目：输入三个整数：x,y,z，然后将其由小到大输出
    分析：先定义一个比较大小并可以做交换的函数，如输入两个数a和b，先比较大小，再将小的放在a上，大的放在b上，
         然后三次调用这个函数，分别比较x和y，x和z，y和z
    编码：utf-8
*/

#include<stdio.h>

void comp_swap(int *a,int *b)
{
    int t;   
    if(*a > *b)
    {
        t = *a;
        *a = *b;
        *b = t;
    }
}

int main(void)
{
	int x,y,z;
    
    printf("please input x,y,z like this 5 7 8！\n");
    printf("please input your nums: ");
    scanf("%d %d %d",&x,&y,&z);

    comp_swap(&x,&y);
    comp_swap(&x,&z);
    comp_swap(&y,&z);

    printf("small to big : %d %d %d\n",x,y,z);

	
	return 0;
}
