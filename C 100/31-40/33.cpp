/**
    2020年4月24日  19点24分
    题目：学习gotoxy()与clrscr()函数
    分析：gotoxy()是定位函数，clrscr()是清屏函数
    编码：utf-8
*/

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>

void gotoxy(int x,int y)  //将光标移到第y行第x列
{
    COORD pos={x,y};  //COORD是系统内部定义的一种结构体，放了x,y两个坐标，将输入的x,y赋值给COORD结构的pos
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

int main(void)
{
    gotoxy(10,5);//x为横向偏移值，y为纵向偏移值，本句相当于把光标移动到第10列第5行
    printf("the2th line\n");
    gotoxy(10,8);
    printf("press any key to clear screen!");
    getch();
    system("CLS");

	return 0;
}

