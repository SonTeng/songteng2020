/**
    2020年4月27日  21点49分
    题目：画椭圆 ellipse
    分析：
    编码：utf-8
    环境：VS2019+easyX
*/

#include<conio.h>
#include<graphics.h>

int main()
{
	int i, j;

	initgraph(480, 360);
	setbkcolor(GREEN);
	cleardevice();

	setlinecolor(BLACK);
	ellipse(100, 100, 380, 260);

	_getch();
	closegraph();


	return 0;
}
