/**
    2020年4月29日  18点47分
    题目：时间函数举例 4 猜数游戏
    分析：
    编码：utf-8
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	int m,n=0,count=1;
    srand(time(NULL));  //利用系统时间作为种子创造一个随机数列
    m=(rand()%100)+1;  //随机产生一个1-100的数

    printf("Num guess game: \n");

    while(n!=m)
    {
        printf("please input your guess num: ");
        scanf("%d",&n);
        if(n==m)
            printf("your guess is right! for %d times",count);
        else if(n<m)
        {
            printf("your guess num is smaller! again\n");
            count++;
        }
        else if(n>m)
        {
            printf("your guess num is bigger! again\n");
            count++;
        }
    }

	return 0;
}

