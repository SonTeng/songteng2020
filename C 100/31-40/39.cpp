/**
    2020年4月24日  21点55分
    题目：有一个已经排好序的数组，现在输入一个数，要求按原规律将它插入数组中。假设升序排列。
    分析：首先判断是否大于最后一个数,或小于最后一个数，然后再考虑插入中间的数的情况，插入后此元素之后的数，依次后移。
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
	int i,j,num;

    int a[10] = {7,12,23,34,45,56,67,78,89,99};
    printArray(a,10);

    printf("please input your new num: ");
    scanf("%d",&num);

    int b[11];

    if(num>=a[9])
    {
        b[10]=num;
        for(i=0;i<10;i++)
           b[i] = a[i];
    }

    if(num<=a[0])
    {
        b[0]=num;
        for(i=0;i<10;i++)
           b[i+1] = a[i];
    }

    if(num>a[0] && num<a[10])
    {
        for(i=0;i<10;i++)
        {
            if(a[i]<=num)
               b[i] = a[i];
            else
            {
                b[i] = num;
                break;
            }
        }
        for(j=i;j<10;j++)
            b[j+1]=a[j];
    }

    printArray(b,11);
    
	return 0;
}

