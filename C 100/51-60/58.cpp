/**
    2020年4月25日  20点33分
    题目：画图，学用rectangle画方形
    分析：
    编码：utf-8
    环境：VS2019+easyX
*/

#include<stdio.h>
#include<graphics.h>
#include<conio.h>

int main()
{
    initgraph(640, 480);

    rectangle(160, 120, 480, 360);

    _getch();

    closegraph();

    return 0;
}

