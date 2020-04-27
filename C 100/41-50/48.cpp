/**
    2020年4月25日  22点56分
    题目：宏 #define 命令练习（3）
    分析：
    编码：utf-8
*/

#include<stdio.h>

#define LAG >
#define SMA <
#define EQ ==

int main(void)
{
	int i=10;
    int j=20;
    if(i LAG j)
        printf("\40:Line 1: %d is larger than %d\n",i,j);
    else if(i EQ j)
        printf("\40:Line 2: %d is equal to %d\n",i,j);
    else if(i SMA j)
        printf("\40:Line 3: %d is smaller than %d\n",i,j);
    else
        printf("\40:Line 4: No such vale.");
    
    return 0;
}

