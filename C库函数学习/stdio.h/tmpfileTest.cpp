#include<stdio.h>

int main()
{
    FILE *fp;
    fp = tmpfile();

    /*使用临时文件*/
    
    fclose(fp);

    return 0;
}