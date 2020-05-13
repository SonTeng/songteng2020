#include<stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("notexited.txt","r");

    if(fp == NULL)
    {
        perror("Error:");
        //void perror(const char *str) 把一个描述性错误消息输出到标准错误 stderr。首先输出字符串 str，后跟一个冒号，然后是一个空格。
        return -1;
    }

    fclose(fp);

    return 0;
}