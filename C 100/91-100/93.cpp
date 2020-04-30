/**
    2020年4月29日  18点43分
    题目：时间函数举例 3
    分析：
    编码：utf-8
*/

#include<stdio.h>
#include<time.h>

int main(void)
{
	int i;
    clock_t start_time,end_time;
    double diff;

    start_time=clock();

    for(i=1;i<=30000000;i++)
        ;
    
    end_time=clock();
    
    diff=(double)(end_time-start_time)/CLOCKS_PER_SEC;

    printf("Line1: %f secs.",diff);

	return 0;
}

