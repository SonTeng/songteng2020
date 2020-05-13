#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char *str;
    str = (char *)malloc(30);
    strcpy(str,"how do you do?");
    printf("String = %s, Address is %p\n",str,str);

    str = (char *)realloc(str,50);
    strcat(str,"I'm fine!thanks!");
    printf("String = %s, Address is %p\n",str,str);

    free(str);

    return 0;
}

/*
String = how do you do?, Address is 0000000000161420
String = how do you do?I'm fine!thanks!, Address is 0000000000161420
*/