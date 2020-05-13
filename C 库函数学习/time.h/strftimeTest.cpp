#include<stdio.h>
#include<time.h>

int main()
{
    time_t rawtime;
    struct tm *info;
    char buffer[80];

    time(&rawtime);

    info=localtime(&rawtime);

    strftime(buffer,80,"%Y-%m-%d  %H:%M:%S",info);
    printf("date&time:  |%s|\n",buffer);

    return 0;
}

/*
date&time:  |2020-05-13  21:50:48|
*/