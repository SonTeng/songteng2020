/**
    2020年4月29日  18点59分
    题目：实时显示当前时间
    分析：
    编码：utf-8
*/

#include<stdio.h>
#include<time.h>
#include<windows.h>

int main(void)
{
	time_t t;
    struct tm *timeinfo;

    while(1)
    {
        t=time(NULL);
        timeinfo=localtime(&t);

        printf("the current time is: %s",asctime(timeinfo));
        Sleep(1000);  //Sleep()的作用是暂停程序，函数里面的单位是以毫秒为单位的，1000表示让函数滞留1秒
        system("cls");  //清屏
    }

	return 0;
}

