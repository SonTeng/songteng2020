/**
    2020年4月29日  00点51分
    题目：两个字符串连接程序
    分析：
    编码：utf-8
*/

#include<stdio.h>

int main(void)
{
	char str1[30],str2[30];
    char str[80];
    char *p,*p1,*p2;

    printf("Line1 please input the string1:");
    gets(str1);
    printf("Line2 please input the string2:");
    gets(str2);

    p1=str1;
    p2=str2;
    p=str;

    while(*p1 != '\0')
    {
        *p = *p1;
        p1++;
        p++;
    }

    while(*p2 != '\0')
    {
        *p = *p2;
        p++;
        p2++;
    }

    *p='\0';

    printf("Line3 the connected string is: %s",str);

	return 0;
}

/*
结果：
Line1 please input the string1:I have an apple,
Line2 please input the string2:but I like peaches.
Line3 the connected string is: I have an apple,but I like peaches.
*/

