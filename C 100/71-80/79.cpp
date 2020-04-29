/**
    2020年4月28日  22点43分
    题目：字符串排序
    分析：
    编码：utf-8
*/

#include<stdio.h>
#include<string.h>

void swap_two_strings(char *str1,char *str2)
{
    char tempstr[20];
    strcpy(tempstr,str1);
    strcpy(str1,str2);
    strcpy(str2,tempstr);
}

int main(void)
{
	char str1[20],str2[20],str3[20];
    printf("please input 1st strings: ");
    gets(str1);
    printf("\nplease input 2nd strings: ");
    gets(str2);
    printf("\nplease input 3rd strings: ");
    gets(str3);

    if(strcmp(str1,str2)>0)
        swap_two_strings(str1,str2);
    if(strcmp(str1,str2)>0)
        swap_two_strings(str1,str3);
    if(strcmp(str2,str3)>0)
        swap_two_strings(str2,str3);

    printf("In order small to big: ");
    printf("%s,   %s,   %s\n",str1,str2,str3);

	return 0;
}

