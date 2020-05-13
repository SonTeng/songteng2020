#include<stdio.h>

int main()
{
    char buff1[60];
    char buff2[60];
    char *s = "HelloWorldToday";

    int i = snprintf(buff1,6,"%s",s);

    printf("string1:\n%s\ncharacter count = %d\n",buff1,i);

    int j = snprintf(buff2,26,"%s",s);
    
    printf("string2:\n%s\ncharacter count = %d\n",buff2,j);

    return 0;
}

/*
string1:
HelloW
character count = -1
string2:
HelloWorldToday
character count = 15
*/