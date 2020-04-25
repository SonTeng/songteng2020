/**
    2020年4月24日  21点47分
    题目：求一个3*3矩阵对角线元素之和。
    分析：二维数组，双重循环，累计输出
    编码：utf-8
*/

#include<stdio.h>

int main(void)
{
	int a[3][3] = {1,2,3,4,5,6,7,8,9};
    int sum=0;

    int i,j;

    for(i=0;i<3;i++)
       for(j=0;j<3;j++)
           if(i==j)
              sum+=a[i][j];

    printf("%d\n",sum);
	
	return 0;
}

