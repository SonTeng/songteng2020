/**
    2020年4月25日  20点48分
    题目：画图 综合例子(2)
    分析：
    编码：utf-8
    环境：VS2019+easyX
*/

#include<graphics.h>
#include<conio.h>
#include<time.h>

int main()
{
    initgraph(640, 480);//创建大小为640*480的绘图窗口

    srand(time(NULL));
    setfont(30, 0, "Arial");//设置字母的字体和大小，setfont(字号，风格，字体)
    setfillstyle(BLACK);//设置清楚字母的填充区域颜色

    char target;
    int x, y;
    while (true)
    {
        target = 65 + rand() % 26;//产生任意大写字母，rand()产生一个随机数，对26取余，结果+65正好是A-Z的ASCII码
        x = rand() % 640;//产生任意下落位置
        for (y = 0; y < 480; y++)
        {
            setcolor(GREEN);//设置字母的颜色
            outtextxy(x, y, target);//outtextxy在指定位置输出字符串，利用循环不断在纵坐标差1个像素的位置输出相同字符串，给人下落的视错觉
            Sleep(10);  //延时，并清除字母，10表示10毫秒
        }
    }

    closegraph();//关闭绘图窗口

    return 0;
}

