#include<stdio.h>
#include<limits.h>

int main()
{
    int i = 0;
    printf("sizeof(i) = %d\n",sizeof(i));
    i = CHAR_BIT;

    printf("charbit = %d\n",i);

    i = SCHAR_MIN;

    printf("scharmin = %d\n",i);

    short j = 13;
    printf("sizeof(j) = %d\n",sizeof(j));

    long long int k = 15;
    printf("sizeof(k) = %d\n",sizeof(k));
}

/*
sizeof(i) = 4
charbit = 8
scharmin = -128
sizeof(j) = 2
sizeof(k) = 8
*/


