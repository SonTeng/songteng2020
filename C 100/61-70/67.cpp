/**
    2020年4月27日  22点36分
    题目：输入数组，最大的与第一个元素交换，最小的与最后一个元素交换
    分析：
    编码：utf-8
*/

#include<stdio.h>

void swap_max_array(int *p,int len)
{
    int i,j=0;
    int tempmax=*p,temp=*p;

    for(i=1;i<len;i++)
    {        
        if(*(p+i)>tempmax)
        {
            tempmax=*(p+i);
            j=i;
        }
    }
    
    *p=tempmax;
    *(p+j)=temp;
}

void swap_min_array(int *p,int len)
{
    int i,j=0;
    int tempmin=*(p+9),temp=*(p+9);

    for(i=0;i<len-1;i++)
    {        
        if(*(p+i)<tempmin)
        {
            tempmin=*(p+i);
            j=i;
        }
    }
    
    *(p+9)=tempmin;
    *(p+j)=temp;
}

void print_array(int *p,int len)
{
    int i;
    for(i=0;i<len;i++)
       printf("%d   ",*(p+i));
    printf("\n");
}

int main(void)
{
	int i;
    int a[10] = {1,8,10,2,4,6,33,11,9,3};

    printf("Line1: the origin array: ");
    print_array(a,10);

    swap_max_array(a,10);

    printf("Line2: put the maxnum in correct order: ");
    print_array(a,10);

    swap_min_array(a,10);

    printf("Line3: put the maxnum in correct order: ");
    print_array(a,10);

	return 0;
}

