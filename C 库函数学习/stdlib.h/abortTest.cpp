#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;

    printf("prepareing to open nofile.txt\n");

    fp = fopen("nofile.txt","r");

    if(fp == NULL)
    {
        printf("prepareing to abort the program!\n");
        abort();
    }
    printf("prepareing to close nofile.txt\n");
    fclose(fp);


    return 0;
}