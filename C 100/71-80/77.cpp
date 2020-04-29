/**
    2020年4月28日  22点16分
    题目：填空练习（指向指针的指针）
    分析：
    编码：utf-8
*/

#include<stdio.h>

int main(void)
{
	char *s[]={"man","woman","girl","boy","sister"};
    char **q;

    int k;
    for(k=0;k<5;k++)
    {
        q=&s[k];//s是指针数组名，q=s表示q指向指针数组中首个元素（指向"man"的指针），q=s+1则指向数组中下一个元素
        printf("%s\n",*q);//字符串格式输出
    }

	return 0;
}

