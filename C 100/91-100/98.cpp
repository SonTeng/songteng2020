/**
    2020年4月29日  19点52分
    题目：从键盘输入一个字符串，将小写字母全部转换为大写字母，然后输入到一个磁盘文件"test"中保存，输入的字符串以!结束
    分析：
    编码：utf-8
*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE *fp;
    int i=0;
    char filename[20],str[100];
    printf("Save the file to: ");
    gets(filename);

	if((fp=fopen(filename,"w"))==NULL)
    {
        printf("Cannot open this file!\n");
        exit(0);
    }

    printf("please input your string: ");
    gets(str);

    while(str[i]!='!')
    {
        if(str[i]>='a'&&str[i]<='z')
            str[i]-=32;
        fputc(str[i],fp);
        i++;
    }

    fclose(fp);

	return 0;
}

/*
结果：
Save the file to: D:\atemp.txt
please input your string: A is a SHORT boy among his class.!
*/