/**
    2020年4月24日  16点27分
    题目：利用递归方法求 5！
    分析：递归公式 fn = fn_1*4;
    编码：utf-8
*/

#include<stdio.h>

int fact(int j)
{
    int result;
    if(j==0)
       result = 1;
    else
    {
        result = j * fact(j-1);
    }
    return result;
}

int main(void)
{
	int i;
    for(i=1;i<=5;i++)
    {
        printf("%d! = %d\n",i,fact(i));
    }
    	
	return 0;
}

