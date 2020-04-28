/**
    2020年4月25日  19点59分
    题目：学习用circle画圆形
    分析：画图注意点：1.安装easyX  2.文件格式用.cpp   3.声明头文件用#include<graphics.h>
         4.initgraph初始化绘图屏幕，closegraph()关闭绘图屏幕
         5.getch()暂停看图，否则程序会一闪而过。
    编码：utf-8  
    环境：VS2019+easyX
*/

#include<stdio.h>
#include<graphics.h>
#include<conio.h>

int main()
{
    initgraph(640, 480);

    circle(320, 240, 100);

    _getch();

    closegraph();

    return 0;
}

