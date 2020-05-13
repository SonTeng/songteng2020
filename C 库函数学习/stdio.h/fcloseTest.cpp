#include<stdio.h>

int main()
{
    FILE *fp;   //FILE 变量类型，适合存储文件流信息的对象类型

    fp = fopen("file.txt","w");  //FILE *fopen(const char *filename,const char *mode):使用给定模式mode打开filename所指向的文件

    int i = fprintf(fp,"%s","hello world! from C File Test!");  //int fprintf(FILE *stream,const char *format,...):发送格式化输出流stream中

    int j = fclose(fp);  //void fclose(FILE *stream): 关闭流stream,刷新所有的缓冲区

    printf("i = %d, j = %d\n",i,j);

    return 0;
}


/*
i = 30, j = 0
*/