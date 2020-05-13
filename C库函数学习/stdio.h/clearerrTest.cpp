#include<stdio.h>

int main()
{
    FILE *fp;
    char c;

    fp = fopen("tempfile.txt","w");

    c=fgetc(fp);  //int fgetc(FILE *stream): 从指定的流stream获取下一个字符（一个无符号字符），并把位置标识符向前移动
    //该函数以无符号 char 强制转换为 int 的形式返回读取的字符，如果到达文件末尾或发生读错误，则返回 EOF。
    
    int j = feof(fp); //int feof(FILE *stream):测试给定流stream的文件结束标识符
    //当设置了与流关联的文件结束标识符时，该函数返回一个非零值，否则返回0
    printf("j = %d\n",j);

    if(ferror(fp))   //int ferror(FILE *stream):测试给定流的错误标识符，如果设置了与流关联的错误标识符，该函数返回一个非零值，否则返回一个零值。
    {
        printf("Line1: error for reading file\n");
    }
    clearerr(fp);   //void clearerr(FILE *stream):清楚给定流stream的文件结束和错误标识符，可与ferror搭配使用。
    //这不会失败，且不会设置外部变量 errno，但是如果它检测到它的参数不是一个有效的流，则返回 -1，并设置 errno 为 EBADF。
    if(ferror(fp))
    {
        printf("Line2: error for reading file\n");
    }
    fclose(fp);

    return 0;
}

/*
j = 0
Line1: error for reading file
*/