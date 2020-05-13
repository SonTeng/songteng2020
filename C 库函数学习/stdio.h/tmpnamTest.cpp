#include<stdio.h>

int main()
{
    char buffer[20];
    char *ptr;

    printf("Line1: %s\n",buffer);

    tmpnam(buffer);
    printf("temp filename 1: %s\n",buffer);

    ptr = tmpnam(NULL);
    printf("temp filename 2: %s\n",ptr);

    return 0;
}