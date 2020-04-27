/**
    2020年4月25日  22点38分
    题目：宏 #define 命令练习（2）
    分析：
    编码：utf-8
*/

#include<stdio.h>

#define exchange(a,b) {\
                         int t;\
                         t=a;\
                         a=b;\
                         b=t;\
                      }

int main(void)
{
	int x=20;
    int y=30;
    printf("x=%d,y=%d\n",x,y);

    exchange(x,y);

	printf("x=%d,y=%d\n",x,y);

	return 0;
}

