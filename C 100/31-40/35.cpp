/**
    2020年4月24日  19点46分
    题目：文件颜色设置
    分析：
    编码：utf-8
*/

#include<stdio.h>
#include<windows.h>

int main(void)
{
	int color;
    printf("please input a num between 0-15: ");
    scanf("%d",&color);

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
    printf("the color has already changed!\n");

	return 0;
}

