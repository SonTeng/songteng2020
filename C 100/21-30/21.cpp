﻿/**
    2020年4月24日  15点39分
    题目：猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，还不过瘾，就又多吃了一个，第二天早上又将剩下的桃子吃掉一半，又多吃一个，以后每天早上都吃了前一天剩下的一半零一个，到第10天，再像吃时，只剩下了一个桃子，问第一天总共摘了多少个桃子？
    分析：采取逆向思维的方法，从后向前推断。
    编码：utf-8
*/

#include<stdio.h>

int main(void)
{
	int day,x1,x2;
    day = 9;
    x2 = 1;

    while(day>0)
    {
        x1 = (x2 + 1) * 2;
        x2 = x1;
        day--;
    }

    printf("the total peaches is %d \n",x1);

	
	return 0;
}

