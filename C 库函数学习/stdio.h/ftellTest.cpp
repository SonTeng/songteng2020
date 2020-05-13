#include<stdio.h>

int main()
{
    FILE *fp;
    int len;

    fp = fopen("freopenTest.txt","r");

    if(fp == NULL)
    {
        perror("Error of Opening File!");
        return -1;
    }

    int j = fseek(fp,0,SEEK_END);

    len = ftell(fp);
    //long int ftell(FILE *stream):返回给定流 stream 的当前文件位置。
    //该函数返回位置标识符的当前值。如果发生错误，则返回 -1L，全局变量 errno 被设置为一个正值。

    fclose(fp);

    printf("the size of freopenTest.txt is %d Bytes\n",len);


    return 0;
}