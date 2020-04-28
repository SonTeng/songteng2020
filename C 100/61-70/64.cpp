/**
    2020年4月27日  21点55分
    题目：利用ellipse and rectangle画图
    分析：
    编码：utf-8
    环境：VS2019+easyX
*/

#include<conio.h>
#include<graphics.h>

int main()
{
	int i;

	initgraph(480, 360);
	for (i = 1; i < 10; i++)  //循环画椭圆和矩形
	{
		ellipse(240 - 24 * i, 180 - 18 * i, 240 + 24 * i, 180 + 18 * i);
		rectangle(240 - 24 * i, 180 - 18 * i, 240 + 24 * i, 180 + 18 * i);
	}

	_getch();
	closegraph();


	return 0;
}
