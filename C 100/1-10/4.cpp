/**
    2020年4月20日  
    题目：输入某年某月某日，判断这一天是这一年的第几天
    分析：以3月5号为例，应该先把前两个月的总天数加起来，再加上5即为这一天是本年的第几天
         特殊情况：如果本年是闰年，且月份大于3时，则需要考虑多加1天
    编码：utf-8
*/

#include<stdio.h>

int main(void)
{
	int year,month,day;  //年月日
    int sum;  //这一年的第几天
    int leap;  //判断是否为闰年

    printf("please input the date like 2020 4 20\n");

    printf("your date is: ");
    scanf("%d %d %d",&year,&month,&day);
    printf("\n");

    if(month<1 && month>12)
        printf("the month you input is wrong!\n");
    if(day<1 && day>31)
        printf("the day you input is wrong!\n");  
    printf("the date you input is %d%d%d",year,month,day);

    switch(month)
    {
        case 1:
               sum = 0;
               break;
        case 2:
               sum = 31;
               break;
        case 3:
               sum = 59;
               break;        
        case 4:
               sum = 90;
               break;
        case 5:
               sum = 120;
               break;
        case 6:
               sum = 151;
               break;
        case 7:
               sum = 181;
               break;
        case 8:
               sum = 212;
               break;
        case 9:
               sum = 243;
               break;        
        case 10:
               sum = 273;
               break;
        case 11:
               sum = 304;
               break;
        case 12:
               sum = 334;
               break;
        default:
               printf("the date you input is wrong!\n");
               break;
    }

    sum = sum + day;

    if(year%400 == 0 || (year%4 == 0 && year%100 != 0))
        leap = 1;
    else
        leap = 0;

    if(leap==1 && month>2)
        sum = sum + leap;    

    printf("the date is the %dth day in %d year\n",sum,year);
	
	return 0;
}
