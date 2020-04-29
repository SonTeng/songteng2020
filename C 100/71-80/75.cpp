/**
    2020年4月28日  
    题目：放松一下，算一道简单的题目。
    分析：
    编码：utf-8
*/

#include<stdio.h>

int main(void)
{
	int i,n;
    for(i=1;i<5;i++)
    {
        n=0;
        if(i!=1)
            n=n+1;
        if(i==3)
            n=n+1;
        if(i==4)
            n=n+1;
        if(i!=4)
            n=n+1;
        if(n==3)
            printf("\40: %c\n",64+i);  //C
    }

	return 0;
}

