#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    float val;
    char str[20];

    strcpy(str,"9876543");
    val = atof(str);
    printf("the string is %s, the float val is %f\n",str,val);

    strcpy(str,"hellow");
    val = atof(str);
    printf("the string is %s, the float val is %f\n",str,val);


    return 0;
}