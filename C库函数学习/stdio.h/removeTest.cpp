#include<stdio.h>
#include<string.h>

int main()
{
    int ret;
    FILE *fp;
    char filename[] = "file.txt";

    fp = fopen(filename,"w");

    fprintf(fp,"%s","today is tuesday!");
    fclose(fp);

    ret = remove(filename);  //可以将本句注释掉再重新执行，比较观察当前目录下的file.txt文件及内容
    
    if(ret == 0)
       printf("removed successfully\n");
    else
    {
        printf("removed failed\n");
    }

    return 0;
    
}