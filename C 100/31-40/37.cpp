/**
    2020年4月24日  21点12分
    题目：对10个数进行排序
    分析：冒泡排序实现
    编码：utf-8
*/

#include<stdio.h>



void smalltobig(int *p,int len)
{
    int i,j,temp;
    for(i=0;i<len-1;i++)
    {
        for(j=0;j<len-1-i;j++)
           if(p[j]>p[j+1])
           {
              temp = p[j];
              p[j] = p[j+1];
              p[j+1] = temp;
           }
    }
}

int main(void)
{
	int a[10] = {2,9,15,7,8,3,4,1,88,6};

    for(int j=0;j<10;j++)
       printf("%d  ",a[j]);

    printf("\n");
    
    smalltobig(a,10);

    printf("\n");

    for(int j=0;j<10;j++)
       printf("%d  ",a[j]);

	return 0;
}

