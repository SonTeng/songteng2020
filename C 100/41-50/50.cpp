/**
    2020年4月25日  23点19分
    题目：#include 的应用练习
    分析：在与本.cpp文件所在的同一文件夹下定义test.h文件。内容如下：
          #define LAG >
          #define SMA <
          #define EQ ==
    编码：utf-8
*/

#include<stdio.h>   //<>表示库函数文件
#include "test.h"   //“ ”表示外部链接

int main(void)
{
	int i=10;
    int j=20;
    if(i LAG j)
        printf("\40:Line 1: %d is larger than %d\n",i,j);
    else if(i EQ j)
        printf("\40:Line 2: %d is equal to %d\n",i,j);
    else if(i SMA j)
        printf("\40:Line 3: %d is smaller than %d\n",i,j);
    else
        printf("\40:Line 4: No such vale.");

	


	return 0;
}

