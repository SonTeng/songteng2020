/**
    2020年4月20日  16点50分
    题目：输出9*9乘法口诀
    分析：分行和分列考虑，共9行,1-9列，成三角形，用i控制行，用j控制列
    编码：utf-8
*/

#include<stdio.h>

int main(void)
{
	int i,j;
    int result;

    for(i=1;i<10;i++)
       {
           for(j=1;j<=i;j++)
           {
              result = i*j;
              printf("%d*%d=%-3d",i,j,result);                 
           }
           printf("\n");
       }

	
	return 0;
}
