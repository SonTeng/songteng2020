/**
    2020年4月24日   15点56分
    题目：打印菱形
             *
            ***
           *****
          *******
           *****
            ***
             *
    分析：7行7列
    编码：utf-8
*/

#include<stdio.h>

int main(void)
{
	int i,j,k;
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=2-i;j++)
           printf(" ");
        for(k=0;k<=2*i;k++)
           printf("*");
        printf("\n");
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=i;j++)
           printf(" ");
        for(k=0;k<=4-2*i;k++)
           printf("*");
        printf("\n");
    }

	
	return 0;
}

