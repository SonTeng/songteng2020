/**
    2020年4月27日  21点37分
    题目：学习putpixel画点
    分析：
    编码：utf-8
	环境：VS2019+easyX
*/

#include<conio.h>
#include<graphics.h>

int main()
{
	int i, j;

	initgraph(280, 280);
	setbkcolor(YELLOW);
	cleardevice();

	for (i = 50; i <= 230; i += 20)
		for (j = 50; j <= 230; j += 3)
			putpixel(i, j, BLACK);
	for (j = 50; j <= 230; j += 20)
		for (i = 50; i <= 230; i += 3)
			putpixel(i, j, BLACK);

	_getch();
	closegraph();


	return 0;
}
