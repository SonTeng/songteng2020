/**
    2020年4月24日  
    题目：
    分析：
    编码：utf-8
*/

#include<stdio.h>

int main(void)
{
	char ch;
    printf("please input the first letter of someday of week: ");

    switch(ch=getchar())
    {
        case 'S':
                printf("please input the second letter:");
                fflush(stdin);
                if((ch=getchar())=='a')
                    printf("Saturday\n");
                else if(ch=='u')
                    printf("Sunday\n");
                else
                    printf("data error!\n");
                break;
        case 'M':
                printf("Monday\n");
                break;
        case 'T':
                printf("please input the second letter:");
                fflush(stdin);
                if((ch=getchar())=='u')
                    printf("Tuesday\n");
                else if(ch=='h')
                    printf("Thursday\n");
                else
                    printf("data error!\n");
                break;
        case 'W':
                printf("Wednesday\n");
                break;
        case 'F':
                printf("Friday\n");
                break;
        default:
                printf("data error!\n");
    }

	


	return 0;
}

