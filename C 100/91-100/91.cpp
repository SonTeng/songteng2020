/**
    2020年4月29日  18点09分
    题目：时间函数举例 1
    分析：
    编码：utf-8
*/

#include<stdio.h>
#include<time.h>

int main(void)
{
	time_t rawtime;            //相当于long int rawtime，而在64位系统int和long int都是4字节
    struct tm *timeinfo;       //指向tm结构的指针timeinfo，tm是系统预设的结构体
    time(&rawtime);            //time函数原型，time_t time(time_t *t);返回值是1970-1-1至今的秒数，并将t指向其
    timeinfo=localtime(&rawtime);  //localtime函数将偏移的秒数转换，返回本地时间（tm结构）
    printf("the current local time is: %s\n",asctime(timeinfo));  //asctime函数将tm结构体转化为字符串


	time_t end_time = time(NULL);

    printf("the current local time is: %s\n",asctime(localtime(&end_time)));
    
    return 0;
}

/*
结果：
the current local time is: Wed Apr 29 18:23:22 2020
*/

