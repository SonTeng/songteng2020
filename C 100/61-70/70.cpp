/**
    2020年4月27日  00点53分
    题目：写一个函数，求一串字符串的长度，在main函数中输入字符串，并输出其长度
    分析：关于输入字符串的方法
    编码：utf-8
*/

#include<stdio.h>

int length_string(char *p)
{
    int count=0;
    while(*p!='\0')
    {
        count++;
        p++;
    }
    return count;
}

int main(void)
{
	int len;
    char str[50];
    
    printf("please input your string: ");
    //用scanf("%s",str);接收含空格的字符串会导致结果不准确
    gets(str); 

    len = length_string(str);

    printf("your string has %d characters.\n",len);

	return 0;
}

