#include<stdio.h>

int main()
{
    FILE *fp;
    fpos_t pos;

    fp=fopen("fgetposTest.txt","w+");
    fgetpos(fp,&pos);
    fputs("Hello,world!",fp);

    fsetpos(fp,&pos);
    fputs("covered",fp);

    fclose(fp);

    return 0;
}

/*
coveredorld!
*/