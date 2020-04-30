/**
    2020年4月29日  19点26分
    题目：从键盘输入一些字符，逐个把它们送到磁盘上去，直到输入一个#为止
    分析：
    编码：utf-8
*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE *fp;    //定义指向文件的指针
    char filename[20];   //存放文件名
    char ch;
    printf("Save the file to: ");
    gets(filename);    //e.g.  D:\Temp\CTestText.txt

    if((fp=fopen(filename,"w"))==NULL)  //以写的方式打开文件，使fp指向该文件
    {
        printf("Cannot open this file!\n");
        exit(0);
    }

    printf("Please input your characters, end by #: ");  //e.g. I like beautiful flowers, such as roses and jasmine#
    while((ch=getchar())!='#')
    {
        fputc(ch,fp);   //将字符写入文件
    }

    fclose(fp);

    printf("Your file has be saved to: %s\n",filename);

	return 0;
}

/*
结果：
Save the file to: D:\Temp\CTestText.txt
Please input your characters, end by #: I like beautiful flowers, such as roses and jasmine.#
Your file has be saved to: D:\Temp\CTestText.txt
*/