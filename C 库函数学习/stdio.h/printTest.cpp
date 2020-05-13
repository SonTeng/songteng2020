#include<stdio.h>
#define PI 3.141593

int main()
{
    printf("%c\n",78);

    char str[20];

    int j = sprintf(str,"the value of PI is %f",PI); //int sprintf(char *buffer, const char *format, [argument]...)
    puts(str);
    printf("j = %d\n",j);

    return 0;
}