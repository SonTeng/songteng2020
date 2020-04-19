/**
    2020年4月17日  17点19分
    什么叫枚举：把一个事物所有可能的取值一一列举出来
*/

#include<stdio.h>

enum WeekDay   //只定义了一个数据类型，并没有定义变量，且该数据类型名称叫做 enum WeekDay
{
    MonDay,TuesDay,WednesDay,ThursDay,FriDay,SaturDay,SunDay //默认下表从0开始，0-6
};
//如果写作MonDay = 4,则WednesDay的下标为6

int main(void)
{
	enum WeekDay day; // int day不合适，因为day只有七个取值，用int 不合适

    day = WednesDay;   //不可写作day = 2;因为2是整型，而day 是enum WeekDay类型
    //也不可写作 day = WeekDay[2]

    printf("%d\n",day);  //结果为2

    	
	return 0;
}
