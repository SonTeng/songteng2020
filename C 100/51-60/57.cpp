/**
    2020年4月25日  20点30分
    题目：画图 用line画直线
    分析：
    编码：utf-8
    环境：VS 2019+easyX
*/

#include<stdio.h>
#include<graphics.h>
#include<conio.h>

int main()
{
    initgraph(640, 480);

    line(160, 240, 480, 240);

    line(320, 120, 320, 260);

    _getch();

    closegraph();

    return 0;
}
