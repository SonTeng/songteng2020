/**
    2020年4月29日  18点31分
    题目：时间函数举例 2
    分析：
    编码：utf-8
*/

#include<stdio.h>
#include<time.h>

int main(void)
{
	time_t start_time,end_time;
    int i;

    start_time=time(NULL);    //time(NULL)则返回当前时间

    for(i=1;i<30001;i++)
        printf("i = %d\n",i);

    end_time=time(NULL);

    printf("the current local time is: %s\n",asctime(localtime(&end_time)));

    printf("the time gap is: %6.1f\n",difftime(end_time,start_time));

	//difftime函数原型 double difftime(time_t time2,time_t time1);比较两个时刻的时间差
    //difftime返回值是long型，所以时间差是整数，返回值用double型可能是因为有可能超出long型表示范围


	return 0;
}

