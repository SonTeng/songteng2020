/**
    2020年4月25日  20点36分
    题目：画图，综合例子
    分析：
    编码：utf-8
    环境：VS2019+easyX
*/

#include<graphics.h>
#include<conio.h>

int main()
{
    initgraph(640, 480);//创建大小为640*480的绘图窗口

    setorigin(240, 180);//设置原点，默认是（0，0），向右向下为正
    setbkcolor(0x7c5732);//填充背景，参数可以是(BLUE)或(0xff0000)或(RGB(0,0,255)),可填参数详见https://docs.easyx.cn/#颜色
    cleardevice();//清楚图线屏幕
    setlinecolor(WHITE);//设置线条颜色
    setlinestyle(PS_SOLID | PS_ENDCAP_FLAT, 10);//设置线条样式，PS_SOLTD表示线型为实线，PS_ENDCAP_FLAT表示端点平坦，10表示宽度为10像素
    setfillcolor(0x24c097);//设置填充颜色
    fillroundrect(-75, -111, 75, 39, 36, 36);//dillroundrect函数用于画填充圆角矩形

    _getch();//暂停看图

    closegraph();//关闭绘图窗口

    return 0;
}
