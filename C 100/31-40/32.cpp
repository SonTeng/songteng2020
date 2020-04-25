/**
    2020年4月24日  18点29分
    题目：Press any key to change color,do you want to try it,please hurry up!
         实现按任意键改变颜色
    分析：关于部分头文件的使用
    编码：utf-8
*/

#include<stdio.h>
#include<windows.h>
#include"conio.h"

int main(void)
{
	int color;
    for(color=0;color<=15;color++) //color=1时为黑色
    {
        printf("Press any key to change color\n");
        getch();//按下任意键后，不需按回车，结束函数
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
        //SetConsoleTextAttribute(参数1,参数2)；参数1获得输出的屏幕缓冲区的句柄，参数2用数字来设置颜色
    }

	
	return 0;
}

