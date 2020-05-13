#include<stdio.h>
#include<string.h>
#include<time.h>

int main()
{
    struct tm t;

    t.tm_hour=20;
    t.tm_min=10;
    t.tm_sec=59;
    t.tm_mday=13;
    t.tm_mon=5;
    t.tm_year=120; //相对于1900的偏移
    t.tm_wday=3;

    puts(asctime(&t));

    return 0;
}

/*
Wed Jun 13 20:10:59 2020
*/