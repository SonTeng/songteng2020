/**
    2020年4月24日  22点24分
    题目：将一个数组逆序输出
    分析：先交换首尾元素，在输出数组。
    编码：utf-8
*/

#include<stdio.h>

void printArray(int *p,int len)
{
    int i;
    for(i=0;i<len;i++)
       printf("%d  ",p[i]);
    printf("\n");
}

int main(void)
{
	int i,j,temp;
    int a[9]={1,2,3,4,5,6,7,8,9};

    printArray(a,9);

    for(i=0;i<=9/2;i++)
    {
        temp=a[i];
        a[i]=a[9-1-i];
        a[9-1-i]=temp;
    }   

	printArray(a,9);


	return 0;
}

